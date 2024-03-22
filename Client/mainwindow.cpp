#include "ChatItemWidget.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTimer>
#include "adminmessege.h"
#include "users.h"
Users userDB;

QString selectedClientName;
QString UserLogin=" ";
QString SegundoUser=" ";
QString direccionArchivo="";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupClient();
    ui->btnSendFile->hide();
    QString currentDir = QDir::currentPath();
    qDebug() << "Current directory:" << currentDir;


}

MainWindow::~MainWindow()
{



    delete ui;
}
void MainWindow::LimpiarChatItems()
{
    for (int i = 0; i < ui->lstMessages->count(); ++i) {
        // Obtener el widget asociado al item
        auto itemWidget = ui->lstMessages->itemWidget(ui->lstMessages->item(i));
        // Verificar si el widget es un ChatItemWidget y eliminarlo si es así
        if (auto chatWidget = dynamic_cast<ChatItemWidget*>(itemWidget)) {
            delete chatWidget;
        }
    }
    // Limpiar la lista
    ui->lstMessages->clear();
}
bool MainWindow::verifyFriend(QString friendName){
    QFile file(UserLogin+"_friends.dat");
    if (file.exists()) {
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QDataStream in(&file);
            file.seek(0);
            while (!in.atEnd()) {
                QString friendUser;
                in  >> friendUser;
                if (friendName == friendUser ) {
                    file.close();
                    return true;
                }
            }
            return false;

    }
    }
    else{
        return false;
    }
}

void MainWindow::addFriend(QString friendName){
    QFile file(UserLogin+"_friends.dat");
    if (!file.open(QIODevice::Append)) {
        qDebug()<<"No se ha abierto el archivo";
        return;
    }


    QDataStream out(&file);
    out << friendName;
}
void MainWindow::GuardarMessege(QString Messege)
{
    AdminMessege messege;
    QString horaActual = QDateTime::currentDateTime().toString("hh:mm:ss");
    direccionArchivo= messege.crearArchivoSiNoExiste(UserLogin,SegundoUser);
    messege.AgregarMensaje(direccionArchivo,UserLogin,SegundoUser,Messege,horaActual);
}

void MainWindow::AgregarMensajesAChat()
{
    AdminMessege messege;
    messege.LimpiarBytes();
    direccionArchivo= messege.crearArchivoSiNoExiste(UserLogin,SegundoUser);
    long mensajes =messege.ContadorMensajes(direccionArchivo);
    for(long i=0; i<mensajes;i++){
        QString message = messege.ReturnMesage(direccionArchivo);

        // Dividir la cadena en partes usando las comas como delimitador
        QStringList dataList = message.split(":;");

        // Extraer cada dato por separado
        if (dataList.size() == 4) { // Asumiendo que hay cuatro partes en el mensaje
            QString NombreUser1 = dataList[0].trimmed(); // Eliminar espacios adicionales con trimmed()
            QString NombreUser2 = dataList[1].trimmed();
            QString Mensaje = dataList[2].trimmed();
            QString fecha = dataList[3].trimmed();

            // Imprimir los datos por separado
            qDebug() << "Nombre del usuario 1: " << NombreUser1;
            qDebug() << "Nombre del usuario 2: " << NombreUser2;
            qDebug() << "Mensaje: " << Mensaje;
            qDebug() << "Fecha: " << fecha;

            if(NombreUser1==UserLogin){//en caso de que yo mande el mensaje
                 qDebug() << "Entro aqui.";
                //_client->sendMessage(Mensaje, ui->cmbDestination->currentText());
                //    ui->lstMessages->addItem(message);
                ui->lnMessage->setText("");
                ui->lnMessage->setFocus();

                auto chatWidget = new ChatItemWidget();
                chatWidget->addMessage(Mensaje, fecha,true);
                auto listWidgetItem = new QListWidgetItem();
                listWidgetItem->setSizeHint(QSize(0, 65));
                ui->lstMessages->addItem(listWidgetItem);
                ui->lstMessages->setItemWidget(listWidgetItem, chatWidget);

            }else{
                 qDebug() << "Entro aqui 2.";

                //en caso de que el otro mando el mensaje
                auto chatWidget = new ChatItemWidget();
                chatWidget->addMessage(Mensaje,fecha);
                auto listWidgetItem = new QListWidgetItem();
                listWidgetItem->setSizeHint(QSize(0, 65));
                ui->lstMessages->addItem(listWidgetItem);
                listWidgetItem->setBackground(QColor(167, 255, 237));
                ui->lstMessages->setItemWidget(listWidgetItem, chatWidget);

            }
        } else {
            qDebug() << "Error al dividir el mensaje.";
        }
    }


}




void MainWindow::setupClient()
{

    addfullnameUsers();
    _client = new ClientManager();
    connect(_client , &ClientManager::connected, [this](){
        ui->centralwidget->setEnabled(true);
    });
    connect(_client, &ClientManager::disconnected, [this](){
        ui->centralwidget->setEnabled(true);
    });

    connect(_client, &ClientManager::textMessageReceived, this, &MainWindow::dataReceived);
    connect(_client, &ClientManager::isTyping, this, &MainWindow::onTyping);
    connect(_client, &ClientManager::initReceivingFile, this, &MainWindow::onInitReceivingFile);
    connect(_client, &ClientManager::rejectReceivingFile, this, &MainWindow::onRejectReceivingFile);

    connect(ui->lnMessage, &QLineEdit::textChanged, _client, &ClientManager::sendIsTyping);
    connect(_client, &ClientManager::connectionACK, this, &MainWindow::onConnectionACK);
    connect(_client, &ClientManager::newClientConnectedToServer, this, &MainWindow::onNewClientConnectedToServer);
    connect(_client, &ClientManager::clientDisconnected, this, &MainWindow::onClientDisconnected);
    connect(_client, &ClientManager::clientNameChanged, this, &MainWindow::onClientNameChanged);
}

void MainWindow::on_actionConnect_triggered()
{
    _client->connectToServer();
}




void MainWindow::on_btnSend_clicked()
{
    auto message = ui->lnMessage->text().trimmed();
    _client->sendMessage(message, ui->cmbDestination->currentText());
//    ui->lstMessages->addItem(message);
    ui->lnMessage->setText("");
    ui->lnMessage->setFocus();

    auto chatWidget = new ChatItemWidget();
    chatWidget->setMessage(message, true);
    auto listWidgetItem = new QListWidgetItem();
    listWidgetItem->setSizeHint(QSize(0, 65));
    ui->lstMessages->addItem(listWidgetItem);
    ui->lstMessages->setItemWidget(listWidgetItem, chatWidget);
    GuardarMessege(message);
}

void MainWindow::dataReceived(QString message)
{
//    ui->lstMessages->addItem(data);
    auto chatWidget = new ChatItemWidget();
    chatWidget->setMessage(message);
    auto listWidgetItem = new QListWidgetItem();
    listWidgetItem->setSizeHint(QSize(0, 65));
    ui->lstMessages->addItem(listWidgetItem);
    listWidgetItem->setBackground(QColor(167, 255, 237));
    ui->lstMessages->setItemWidget(listWidgetItem, chatWidget);


}

void MainWindow::addfullnameUsers()
{

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateConnectedUsers);
   // connect(timer, &QTimer::timeout, this, &MainWindow::onConnectionACK);
    timer->start(3000);

    /*clearchatTimer = new QTimer(this);
    connect(clearchatTimer, &QTimer::timeout, this, &MainWindow::LimpiarChatItems);
    clearchatTimer->start(20);

    chatUpdateTimer = new QTimer(this);
    connect(chatUpdateTimer, &QTimer::timeout, this, &MainWindow::AgregarMensajesAChat);
    chatUpdateTimer->start(10);
    ui->lstMessages->clear();*/


}


void MainWindow::updateConnectedUsers()
{
    Users users;
    QStringList allFullNames = users.getAllFullNames();
    allFullNames.removeAll(UserLogin);
    ui->conectedUsers->clear();
    ui->conectedUsers->addItems(allFullNames);
}


void MainWindow::on_lnClientName_editingFinished()
{

}


void MainWindow::on_cmbStatus_currentIndexChanged(int index)
{
    auto status = (ChatProtocol::Status)index;
    _client->sendStatus(status);
}

void MainWindow::onTyping()
{
    statusBar()->showMessage("Server is typing...", 750);
}


void MainWindow::on_btnSendFile_clicked()
{
    auto fileName = QFileDialog::getOpenFileName(this, "Select a file", "/home");
    _client->sendInitSendingFile(fileName);
}

void MainWindow::onRejectReceivingFile()
{
    QMessageBox::critical(this, "Sending File", "Operation rejected...");
}

void MainWindow::onInitReceivingFile(QString clientName, QString fileName, qint64 fileSize)
{
    auto message = QString("Client (%1) wants to send a file. Do you want to accept it?\nFile Name:%2\nFile Size: %3 bytes")
            .arg(clientName, fileName)
            .arg(fileSize);
    auto result = QMessageBox::question(this, "Receiving File", message);
    if (result == QMessageBox::Yes) {
        _client->sendAcceptFile();
    } else {
        _client->sendRejectFile();
    }

}

void MainWindow::onConnectionACK(QString myName, QStringList clientsName)
{
    ui->cmbDestination->clear();

    clientsName.clear();
    clientsName.append(SegundoUser);
    foreach (auto client, clientsName)
    {
        ui->cmbDestination->addItem(client);
        ui->conectedUsers->addItem(client);
    }
    setWindowTitle(myName);

}

void MainWindow::onNewClientConnectedToServer(QString clienName)
{
ui->cmbDestination->addItem(clienName);
}

void MainWindow::onClientNameChanged(QString prevName, QString clientName)
{

        for (int i = 0; i < ui->cmbDestination->count(); ++i) {
            if (ui->cmbDestination->itemText(i) == prevName) {
                ui->cmbDestination->setItemText(i, clientName);
                return;
            }
        }

}

void MainWindow::onClientDisconnected(QString clientName)
{
    for (int i = 0; i < ui->cmbDestination->count(); ++i) {
        if (ui->cmbDestination->itemText(i) == clientName) {
            ui->cmbDestination->removeItem(i);
            return;
        }
    }
}


void MainWindow::on_backmenu_clicked()
{
    LimpiarChatItems();
    ui->stackedWidget->setCurrentIndex(0);

}


void MainWindow::on_login_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    UserLogin=username;
    if (userDB.loginUser(username, password)) {
        _client->connectToServer();
        //auto username = ui->lineEdit->text().trimmed();
        //_client->sendName(username);
        UserLogin=username;
        ui->stackedWidget->setCurrentIndex(0);
    } else {
        QMessageBox::warning(this, "Inicio de sesión fallido", "Nombre de usuario o contraseña incorrectos.");
    }

}


void MainWindow::on_signin_clicked()
{
    QString username = ui->Username->text();
    QString password = ui->password->text();
    QString fullName = ui->Name->text();
    QDate dateOfBirth = ui->userdate->date();

    if (userDB.userExists(username)) {
        QMessageBox::warning(this, "Registro fallido", "El usuario ya existe.");
    } else {

        UserData newUser;
        newUser.username = username;
        newUser.password = password;
        newUser.fullName = fullName;
        newUser.dateOfBirth = dateOfBirth;

        if (userDB.registerUser(newUser)) {
            QMessageBox::information(this, "Registro exitoso", "Usuario registrado correctamente.");
            UserLogin=username;
            ui->stackedWidget->setCurrentIndex(1);
        } else {
            QMessageBox::critical(this, "Error de registro", "Ocurrió un error durante el registro.");
        }
    }
}


void MainWindow::on_loginb_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_singin_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_clicked()
{
    // _client->connectToServer();
    ui->stackedWidget->setCurrentIndex(1);
}



void MainWindow::on_log_out_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_conectedUsers_itemClicked(QListWidgetItem *item)
{
    QString itemName = item->text();
    SegundoUser =itemName;



    if(!verifyFriend(itemName)){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Friend Request", "Deseas agregar amigo: " + itemName + "?",
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            addFriend(itemName);
        } else {
            QMessageBox::information(this, "Rechazo de solicitud", "No puedes enviar mensajes a usuarios que no son amigos.");
        }


    }

    else if(verifyFriend(itemName)){

        ui->cmbDestination->clear();
        ui->cmbDestination->addItem(SegundoUser);
        ui->label_2->setText(SegundoUser);
        ui->lnClientName->setText(UserLogin);
        ui->lnClientName->hide();
        ui->stackedWidget->setCurrentIndex(1);
        LimpiarChatItems();
        AgregarMensajesAChat();

    }


}

void MainWindow::on_signin_pressed()
{

}


void MainWindow::on_lnClientName_textChanged(const QString &arg1)
{

    auto name = ui->lnClientName->text().trimmed();
    _client->sendName(name);
}


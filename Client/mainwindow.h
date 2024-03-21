#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ClientManager.h"
#include "qlistwidget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void GuardarMessege(QString Messege);
    void AgregarMensajesAChat();

private slots:
    void on_actionConnect_triggered();

    void on_btnSend_clicked();

    void dataReceived(QString message);

    void on_lnClientName_editingFinished();

    void on_cmbStatus_currentIndexChanged(int index);

    void onTyping();

    void on_btnSendFile_clicked();

    void onRejectReceivingFile();

    void onInitReceivingFile(QString clientName, QString fileName, qint64 fileSize);


    void onConnectionACK(QString myName, QStringList clientsName);
    void onNewClientConnectedToServer(QString clienName);
    void onClientNameChanged(QString prevName, QString clientName);
    void onClientDisconnected(QString clientName);


    void on_backmenu_clicked();

    void on_login_clicked();

    void on_signin_clicked();

    void on_loginb_clicked();

    void on_singin_clicked();

    void on_pushButton_clicked();

    void on_log_out_clicked();

    void addfullnameUsers();

    void on_conectedUsers_itemClicked(QListWidgetItem *item);

    void updateConnectedUsers();



    void on_signin_pressed();

private:
    Ui::MainWindow *ui;
    ClientManager *_client;
    void setupClient();
};
#endif // MAINWINDOW_H

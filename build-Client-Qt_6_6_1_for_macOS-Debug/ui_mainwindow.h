/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionExot;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *Menu;
    QPushButton *log_out;
    QListWidget *conectedUsers;
    QPushButton *pushButton;
    QWidget *Chat;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lnMessage;
    QPushButton *btnSend;
    QPushButton *btnSendFile;
    QLabel *label_2;
    QComboBox *cmbDestination;
    QListWidget *lstMessages;
    QPushButton *backmenu;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lnClientName;
    QComboBox *cmbStatus;
    QWidget *Login;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *login;
    QPushButton *singin;
    QWidget *Sign;
    QLineEdit *Name;
    QPushButton *signin;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QDateEdit *userdate;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *Username;
    QPushButton *loginb;
    QLineEdit *password;
    QWidget *page;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(602, 691);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName("actionConnect");
        actionExot = new QAction(MainWindow);
        actionExot->setObjectName("actionExot");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        log_out = new QPushButton(Menu);
        log_out->setObjectName("log_out");
        log_out->setGeometry(QRect(30, 30, 83, 29));
        conectedUsers = new QListWidget(Menu);
        conectedUsers->setObjectName("conectedUsers");
        conectedUsers->setGeometry(QRect(30, 70, 271, 511));
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 30, 83, 29));
        stackedWidget->addWidget(Menu);
        Chat = new QWidget();
        Chat->setObjectName("Chat");
        layoutWidget = new QWidget(Chat);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 550, 531, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lnMessage = new QLineEdit(layoutWidget);
        lnMessage->setObjectName("lnMessage");

        gridLayout->addWidget(lnMessage, 1, 1, 1, 2);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName("btnSend");

        gridLayout->addWidget(btnSend, 1, 3, 1, 1);

        btnSendFile = new QPushButton(layoutWidget);
        btnSendFile->setObjectName("btnSendFile");
        btnSendFile->setMaximumSize(QSize(35, 16777215));

        gridLayout->addWidget(btnSendFile, 1, 4, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        cmbDestination = new QComboBox(layoutWidget);
        cmbDestination->addItem(QString());
        cmbDestination->addItem(QString());
        cmbDestination->setObjectName("cmbDestination");

        gridLayout->addWidget(cmbDestination, 0, 1, 1, 2);

        lstMessages = new QListWidget(Chat);
        lstMessages->setObjectName("lstMessages");
        lstMessages->setGeometry(QRect(10, 80, 531, 451));
        backmenu = new QPushButton(Chat);
        backmenu->setObjectName("backmenu");
        backmenu->setGeometry(QRect(10, 0, 83, 29));
        layoutWidget_2 = new QWidget(Chat);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 40, 531, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lnClientName = new QLineEdit(layoutWidget_2);
        lnClientName->setObjectName("lnClientName");

        horizontalLayout_2->addWidget(lnClientName);

        cmbStatus = new QComboBox(layoutWidget_2);
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->setObjectName("cmbStatus");

        horizontalLayout_2->addWidget(cmbStatus);

        stackedWidget->addWidget(Chat);
        Login = new QWidget();
        Login->setObjectName("Login");
        lineEdit = new QLineEdit(Login);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 240, 113, 28));
        label_8 = new QLabel(Login);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(220, 170, 101, 41));
        QFont font;
        font.setPointSize(15);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(Login);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 290, 113, 28));
        login = new QPushButton(Login);
        login->setObjectName("login");
        login->setGeometry(QRect(220, 340, 111, 29));
        QFont font1;
        font1.setPointSize(10);
        login->setFont(font1);
        singin = new QPushButton(Login);
        singin->setObjectName("singin");
        singin->setGeometry(QRect(230, 370, 91, 29));
        singin->setFlat(true);
        stackedWidget->addWidget(Login);
        Sign = new QWidget();
        Sign->setObjectName("Sign");
        Name = new QLineEdit(Sign);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(280, 200, 113, 28));
        signin = new QPushButton(Sign);
        signin->setObjectName("signin");
        signin->setGeometry(QRect(210, 370, 101, 29));
        signin->setFont(font1);
        label_4 = new QLabel(Sign);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 240, 63, 20));
        label_3 = new QLabel(Sign);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 130, 91, 41));
        label_3->setFont(font);
        label_5 = new QLabel(Sign);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 200, 63, 20));
        userdate = new QDateEdit(Sign);
        userdate->setObjectName("userdate");
        userdate->setGeometry(QRect(280, 320, 111, 29));
        label_6 = new QLabel(Sign);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(160, 280, 63, 20));
        label_7 = new QLabel(Sign);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 320, 63, 20));
        Username = new QLineEdit(Sign);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(280, 240, 113, 28));
        loginb = new QPushButton(Sign);
        loginb->setObjectName("loginb");
        loginb->setGeometry(QRect(210, 410, 101, 29));
        loginb->setFlat(true);
        password = new QLineEdit(Sign);
        password->setObjectName("password");
        password->setGeometry(QRect(280, 280, 113, 28));
        stackedWidget->addWidget(Sign);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 602, 22));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionConnect);
        menuOptions->addSeparator();
        menuOptions->addAction(actionExot);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionExot->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        log_out->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "chat", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        btnSendFile->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Desitnation:", nullptr));
        cmbDestination->setItemText(0, QCoreApplication::translate("MainWindow", "Server", nullptr));
        cmbDestination->setItemText(1, QCoreApplication::translate("MainWindow", "All", nullptr));

        backmenu->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lnClientName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Client Name", nullptr));
        cmbStatus->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        cmbStatus->setItemText(1, QCoreApplication::translate("MainWindow", "Available", nullptr));
        cmbStatus->setItemText(2, QCoreApplication::translate("MainWindow", "Away", nullptr));
        cmbStatus->setItemText(3, QCoreApplication::translate("MainWindow", "Busy", nullptr));

        lineEdit->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        singin->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        signin->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "User ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        loginb->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

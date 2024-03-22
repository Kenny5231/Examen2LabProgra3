#include "users.h"

#include <QDataStream>


#include <QCoreApplication>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QFile>
#include <QByteArray>
#include <QIODevice>
#include <QDebug>
#include <QDate>
#include <QMessageBox>
#include <mainwindow.h>
#include <QTextStream>
using namespace std;


//QFile file("users.dat");
QFile file("/Users/Kenny/Documents/GitHub/Examen2LabProgra3/Client/users.dat");
QDataStream UserAdd(&file);
QDataStream UserRead(&file);

Users::Users() {


    struct UserData {
        QString username;
        QString password;
        QString fullName;
        QDate dateOfBirth;
        QStringList messages;
        QStringList friends;
    };


}


bool Users::registerUser( UserData userData) {
    if (userExists(userData.username)) {
        return false;
    }


    QFile file("users.dat");
    if (!file.open(QIODevice::Append)) {
        return false;
    }


    QDataStream out(&file);
    out << userData.username << userData.password << userData.fullName << userData.dateOfBirth << userData.messages;

    file.close();
    return true;
}

bool Users::loginUser( QString username,  QString password) {
    QFile file("users.dat");
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }
    UserData userData;
    QDataStream in(&file);
    QString storedUsername;

    file.seek(0);
    while (!in.atEnd()) {
        in  >> userData.username >> userData.password >> userData.fullName >> userData.dateOfBirth >> userData.messages;
        if (userData.username == username && userData.password==password ) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

bool Users::userExists( QString username) {
    QFile file("users.dat");
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }
    UserData userData;
    QDataStream in(&file);
    QString storedUsername;

    file.seek(0);
    while (!in.atEnd()) {
        in  >> userData.username >> userData.password >> userData.fullName >> userData.dateOfBirth >> userData.messages;
        if (userData.username == username) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

QStringList Users::getAllFullNames() {
    QStringList fullNames;
    QFile file("users.dat");

    if (!file.open(QIODevice::ReadOnly)) {
        return fullNames;
    }
    UserData userData;
    QDataStream in(&file);

    file.seek(0);
    while (!in.atEnd()) {
        in >> userData.username >> userData.password >> userData.fullName >> userData.dateOfBirth >> userData.messages;
        fullNames << userData.username;
    }

    file.close();
    return fullNames;
}

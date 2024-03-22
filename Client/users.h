#ifndef USERS_H
#define USERS_H




#include <QString>
#include <QDate>
#include <QStringList>
#include <QDataStream>

struct UserData {
    QString username;
    QString password;
    QString fullName;
    QDate dateOfBirth;
    QStringList messages;
};


class Users
{
public:
    bool registerUser( UserData username);
    bool loginUser( QString username,  QString password);
    Users();
    bool userExists( QString username);
    QStringList getAllFullNames();
};


#endif // USERS_H

//#ifndef ADMIN_H
//#define ADMIN_H

#pragma once

#include <iostream>
#include <QMap>
#include<QObject>
using namespace std;

class Admin
{

private:

    QString username;
    QString password;
    QString fullName;




public:
    QMap<QString, int> check{ {"ahmed", hashing("ahmedpass")}, {"mohamed", hashing("mohamedpass")} };
    QMap<QString, QString> usernameFullName{{"ahmed", "Ahmed Elsayed"}, {"mohamed", "Mohamed Elsayed"} };

    Admin();


    int hashing(QString password);


    bool checkUsername(QString username);

    bool checkPassword(QString password);

    void registerNew(QString username, QString password, QString fullName, QMap<QString, int> &check, QMap<QString, QString> &usernameFullName);

    bool loginCheck(QString username, QString password);

    void setUsername(QString username);

    void setPassword(QString password);

    void setFullName(QString fullName);



    QString getFullName(QString username);



    ~Admin();
};
//#endif

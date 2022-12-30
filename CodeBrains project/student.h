#ifndef STUDENT_H
#define STUDENT_H
#include <QMap>
#include <QString>
#include<QStringList>
#include <QChar>
#include "User.h"

class Student :public User
{
private:
    QChar gpa;
    float totalGrade;
    int age;

public:


    //->Course_Code -> grade
    QMap<QString, float> grades;


    //ID------>student
    static QMap<QString, Student> students;
    //QMap<QString, Student> students;

    Student();

    //parameterized
    Student(QString n, QString m, QString e, QString i, QChar gb, float totg , int a);


    QChar getGpa();
    void setGpa(QChar g_pa);

    float getTotalGrade();
    void setTotalGrade(float total);

    QString getFirstLastName();

    QString getFullName();
    void setFullName(QString newfullName);

    int getAge();
    void setAge(int a_ge);

    QString getMobile();
    void setMobile(QString m_obile);

    QString getMail();
    void setMail(QString e_mail);

    QString getID();
    void setID(QString newID);

    void addNew();
};

#endif // STUDENT_H

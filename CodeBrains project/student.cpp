
#include "student.h"
#include <QList>


QMap <QString,Student> Student::students = {};

Student::Student(){

    //firstName = lastName = mobile = email = ID = "";
    gpa ='-';
    totalGrade = age = 0;

}

Student::Student(QString n, QString m, QString e, QString i, QChar gb, float totg , int a)
    : User(n, m, e,i), gpa(gb), totalGrade(totg), age(a)
{}

QChar Student::getGpa()
{
    return gpa;
}

void Student::setGpa(QChar g_pa)
{
    gpa = g_pa;
}

float Student::getTotalGrade()
{
    return totalGrade;
}

void Student::setTotalGrade(float total)
{
    totalGrade = total;
}

QString Student::getFirstLastName()
{
    QStringList list_str = fullName.split(" ");
   // QString first = list_str.first();
   // QString last = list_str.back();
    return list_str.first()+" "+list_str.back();
}


QString Student::getFullName()
{
    return fullName;
}

 void Student::setFullName(QString newfullName)
 {
     fullName=newfullName;
 }

int Student::getAge()
{
    return age;
}

void Student::setAge(int a_ge)
{
    age = a_ge;
}

QString Student::getMobile()
{
    return mobile;
}

void Student::setMobile(QString m_obile)
{
    mobile = m_obile;
}

QString Student::getMail()
{
    return email;
}

void Student::setMail(QString e_mail)
{
    email = e_mail;
}

QString Student::getID(){
    return ID;
}
void Student::setID(QString newID){
    ID = newID;
}

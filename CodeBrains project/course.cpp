#include "course.h"

Course::Course()
{}

Course::Course(QString n, QString c, QString hall, std::pair<int, int> time)
{
    name = n;
    code = c;
    lecHall = hall;
    time.first = time.first;
    time.second = time.second;

}

QString Course::getCourseName(){
    return name;
}

QString Course::getCode(){
    return code;
}

QString Course::getLecHall(){
    return lecHall;
}

QString Course::getLecTime(){
    QString Ftime = QString::number(time.first);
    QString Stime = QString::number(time.second);
    QString conc_time = Ftime + Stime ;
    return conc_time;
}

void Course::setCode(QString c){
    code = c;
}

void Course::setCourseName(QString n){
    name = n;
}

void Course::setLecHall(QString hall){
    lecHall = hall;
}

void Course::setLecTime(std::pair<int, int> t)
{
    time.first = t.first;
    time.second = t.second;
}

QMap<QString, Course> Course::courses = {};

#include "LecHall.h"

LecHall::LecHall(QString n) : name(n){}

QString LecHall::getName()
{
    return name;
}

bool LecHall::isAvaliable(QString day, QString time)
{
    int dayn = LecHall::days.find(day).value();
    int timen = LecHall::times.find(time).value();

    return this->avaliable[dayn][timen];
}

QVector <QString> LecHall::timesAval(QString d)
{
    QVector <QString> timesAval;

    int dayn = LecHall::days.find(d).value();

    for(QMap <QString,int> :: Iterator t = LecHall::times.begin();
        t != LecHall::times.end();
        t++){
        if(this->avaliable[dayn][t.value()])
            timesAval.push_front(t.key());
    }
    return timesAval;
}

void LecHall::reserve(QString day, QString time)
{
    int dayn = LecHall::days.find(day).value();
    int timen = LecHall::times.find(time).value();

    this->avaliable[dayn][timen] = false;
}

    QMap<QString,LecHall> LecHall::lecHalls = {};

    QMap <QString,int> LecHall::days = {
        {"Saturday",0},
        {"Sunday",1},
        {"Monday",2},
        {"Tuesday",3},
        {"Wednesday",4},
        {"Thursday",5}
    };

    QMap <QString,int> LecHall::times = {
        {"8 : 30 - 10 : 00",0},
        {"10 : 15 - 11 : 45",1},
        {"12 : 15 - 1 : 45",2},
        {"2 : 0 - 3 : 30",3},
        {"3 : 45 - 5 : 15",4}
    };

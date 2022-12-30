#include "LecHall.h"

LecHall::LecHall(QString n) : name(n)
{}

QString LecHall::getName()
{
    return name;
}

bool LecHall::isAvaliable(int time, int day)
{
    int dayCol = day - 1;
    int timeRow = time - 1;

    return this->avaliable[timeRow][dayCol];
}

QVector <int> LecHall::timesAval(int d)
{
    QVector <int> timesAval;

    int dayCol = d - 1;

    for(int i = 0; i < 5; i++)
        if(this->avaliable[i][dayCol])
            timesAval.push_front(i);

    return timesAval;
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

    bool avaliable[5][5] = {};


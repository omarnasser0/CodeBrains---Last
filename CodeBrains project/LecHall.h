#ifndef LECHALL_H
#define LECHALL_H

#include <QMap>
#include <QVector>

class LecHall
{

private:

    QString name;

public:

    static QMap<QString,LecHall> lecHalls;

    bool avaliable[5][5];

    LecHall(QString n);

    QString getName();

    bool isAvaliable(int time, int day);

    QVector <int> timesAval(int d);

    static QMap <QString,int> days;
    static QMap <QString,int> times;

};

#endif // LECHALL_H

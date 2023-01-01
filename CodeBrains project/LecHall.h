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

    bool avaliable[6][5] = {{true,true,true,true,true}};

    LecHall(QString n);

    QString getName();

    bool isAvaliable(QString day, QString time);

    QStringList timesAval(QString d);

    void reserve(QString day, QString time);

    static QMap <QString,int> days;
    static QMap <QString,int> times;

};

#endif // LECHALL_H

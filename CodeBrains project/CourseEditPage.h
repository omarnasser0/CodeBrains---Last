#ifndef COURSEEDITPAGE_H
#define COURSEEDITPAGE_H

#include <QDialog>

#include "course.h"
#include "LecHall.h"

namespace Ui {
class CourseEditPage;
}

class CourseEditPage : public QDialog
{
    Q_OBJECT

public:
    explicit CourseEditPage(QWidget *parent = nullptr,QMap<QString,Course>:: Iterator corsIt = {});
    ~CourseEditPage();

    void lecHallComboboxdisplay();
    void dayComboboxdisplay();
    void timeComboboxdisplay();


private:
    Ui::CourseEditPage *ui;
    Course editedCors;
};

#endif // COURSEEDITPAGE_H

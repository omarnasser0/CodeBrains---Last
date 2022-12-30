#ifndef STUDENTEDITPAGE_H
#define STUDENTEDITPAGE_H

#include <QDialog>
#include "student.h"

namespace Ui {
class StudentEditPage;
}

class StudentEditPage : public QDialog
{
    Q_OBJECT

public:
    explicit StudentEditPage(QWidget *parent = nullptr,QMap<QString,Student>:: Iterator stud = {});
    ~StudentEditPage();

    void courseComboBoxDisplay();
    void courseTable();

private:
    Ui::StudentEditPage *ui;
    Student editedStudent;
};

#endif // STUDENTEDITPAGE_H

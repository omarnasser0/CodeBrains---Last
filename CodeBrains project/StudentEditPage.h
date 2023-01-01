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

<<<<<<< HEAD
    void studentCoursesDisplay();
    void allCoursesDisplay();
    void courseComboBoxDisplay();
=======
        void studentCoursesDisplay();
        void allCoursesDisplay();
        void courseComboBoxDisplay();

>>>>>>> fa94936290dbb4550fcc7a0bbe9fb963ef7fee0a
private slots:
    void on_savePushButton_clicked();
    void on_allCoursesTable_cellDoubleClicked(int row, int column);
    void on_setPushButton_clicked();
    void on_studentCoursesTable_cellDoubleClicked(int row, int column);

private:
    Ui::StudentEditPage *ui;

    Student *studPtr;
     QString oldID;
int rowcount =0;
<<<<<<< HEAD
=======

>>>>>>> fa94936290dbb4550fcc7a0bbe9fb963ef7fee0a
};

#endif // STUDENTEDITPAGE_H

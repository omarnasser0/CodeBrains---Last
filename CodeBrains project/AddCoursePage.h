#ifndef ADDCOURSEPAGE_H
#define ADDCOURSEPAGE_H
#include"course.h"
#include <QDialog>
#include<QListWidgetItem>
#include"professor.h"
#include"student.h"

namespace Ui {
class AddCoursePage;
}

class AddCoursePage : public QDialog
{
    Q_OBJECT

public:
    explicit AddCoursePage(QWidget *parent = nullptr);
    int profCounter=0,studCounter=0;

    ~AddCoursePage();

    void lecHallCBox();
    void dayCBoxDisplay();
    void timeCBoxDisplay();

    void allStdTableDisplay();
    void allPrfTableDisplay();

    void addedStdTableDisplay();
    void addedPrfTableDisplay();

private slots:

    void on_addPushButton_clicked();

    void on_deleteSButton_clicked();

    void on_deletePButton_clicked();

    void on_allStudentsTable_cellDoubleClicked(int row, int column);

    void on_allProfessorsTable_cellDoubleClicked(int row, int column);

private:
    Ui::AddCoursePage *ui;

    Course newCourse;
};

#endif // ADDCOURSEPAGE_H

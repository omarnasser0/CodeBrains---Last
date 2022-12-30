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

private slots:

    void on_add_course_butom_clicked();

    void on_combo_time_currentTextChanged(const QString &arg1);

    void on_comboStudentList_currentTextChanged(const QString &arg1);

    void on_selectedStudenListt_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_combo_professor_currentTextChanged(const QString &arg1);

    void on_selectedProfessorList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::AddCoursePage *ui;
    void TablewidgetDisplay();
};

#endif // ADDCOURSEPAGE_H

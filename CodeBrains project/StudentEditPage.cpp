#include "StudentEditPage.h"
#include "ui_StudentEditPage.h"
#include <QMessageBox>
#include "course.h"

StudentEditPage::StudentEditPage(QWidget *parent,QMap<QString,Student>:: Iterator stud) :
    QDialog(parent),
    ui(new Ui::StudentEditPage)
{
    ui->setupUi(this);

    editedStudent = stud.value();

    ui->FLNameLabel->setText(stud->getFirstLastName());
    ui->nameLineEdit->setText(stud->getFullName());
    ui->idLineEdit->setText(stud->getID());
    ui->phoneLineEdit->setText(stud->getMobile());
    ui->emailLineEdit->setText(stud->getMail());

    courseComboBoxDisplay();
}

StudentEditPage::~StudentEditPage()
{
    delete ui;
}

void StudentEditPage::courseComboBoxDisplay()
{
    QStringList coursesList;

    for(QMap<QString,float> ::Iterator it = editedStudent.grades.begin(); it != editedStudent.grades.end(); it ++)
        coursesList.push_front(Course::courses.find(it.key())->getCourseName());

    for(int c = 0; c < coursesList.size(); c++)
        ui->coursecomboBox->addItem(coursesList[c]);


}
    //int rowcount = 0;
//    for(QMap<QString,float> ::Iterator it = editedStudent.grades.begin(); it != editedStudent.grades.end(); it++){
//        ui->coursecomboBox->insertItem(rowcount ,it.key());
//        rowcount++;
//    }


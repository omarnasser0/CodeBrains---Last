#include "StudentEditPage.h"
#include "ui_StudentEditPage.h"
#include <QMessageBox>
#include "course.h"

StudentEditPage::StudentEditPage(QWidget *parent,QMap<QString,Student>:: Iterator stud) :
    QDialog(parent),
    ui(new Ui::StudentEditPage)
{
    ui->setupUi(this);

    oldID=stud->getID();

    ui->FLNameLabel->setText(stud->getFirstLastName());
    ui->nameLineEdit->setText(stud->getFullName());
    ui->idLineEdit->setText(stud->getID());
    ui->phoneLineEdit->setText(stud->getMobile());
    ui->emailLineEdit->setText(stud->getMail());

    studPtr = &stud.value();

    studentCoursesDisplay();
    allCoursesDisplay();
}

StudentEditPage::~StudentEditPage()
{
    delete ui;
}

void StudentEditPage::studentCoursesDisplay()
{
    ui->studentCoursesTable->setRowCount(0);

    ui->studentCoursesTable->setColumnCount(3);

    QStringList hLables;
    hLables<<"Code"<<"Name"<<"Grade";
    ui->studentCoursesTable->setHorizontalHeaderLabels(hLables);

    rowcount = 0;
    for( QMap<QString,float>:: Iterator It = studPtr->grades.begin();
        It!= studPtr->grades.end();
        It++)

    {
        ui->studentCoursesTable->insertRow(rowcount);

        QTableWidgetItem *Name= new QTableWidgetItem;
        QTableWidgetItem *Code= new QTableWidgetItem;
        QTableWidgetItem *Grade= new QTableWidgetItem;

        Name->setText(Course::courses.find(It.key()).value().getCourseName());
        Code->setText(It.key());
        Grade->setText(QString::number(It.value()));

        ui->studentCoursesTable->setItem(rowcount,0,Code);
        ui->studentCoursesTable->setItem(rowcount,1,Name);
        ui->studentCoursesTable->setItem(rowcount,2,Grade);

        ui->courseComboBox->insertItem(rowcount,Code->text());


        rowcount++;
    }

}

void StudentEditPage::allCoursesDisplay()
{
     ui->allCoursesTable->setRowCount(0);
    ui->allCoursesTable->setColumnCount(2);

    QStringList firstTitle;
    firstTitle<<"Code"<<"Name";
    ui->allCoursesTable->setHorizontalHeaderLabels(firstTitle);


     rowcount = 0;
     for(auto It : Course::courses)
     {
         ui->allCoursesTable->insertRow(rowcount);

         QTableWidgetItem *Code= new QTableWidgetItem;
         QTableWidgetItem *Name= new QTableWidgetItem;

         Code->setText(It.getCode());
         Name->setText(It.getCourseName());

         ui->allCoursesTable->setItem(rowcount,0,Code);
         ui->allCoursesTable->setItem(rowcount,1,Name);

         rowcount++;
    }

}











void StudentEditPage::on_allCoursesTable_cellDoubleClicked(int row, int column)
{
     QString addThisCourse = ui->allCoursesTable->item(row,0)->text();

  // if(ui->studentCoursesTable->)
   // {
         rowcount=ui->studentCoursesTable->rowCount();

         QMap<QString,Course>::Iterator It= Course::courses.find(addThisCourse);

         QTableWidgetItem *Name= new QTableWidgetItem;
         QTableWidgetItem *Code= new QTableWidgetItem;
         QTableWidgetItem *Grade= new QTableWidgetItem;
         Name->setText(It->getCourseName());
         Code->setText(It.key());
         Grade->setText("0");

         ui->studentCoursesTable->insertRow(rowcount);

         ui->studentCoursesTable->setItem(rowcount,0,Code);
         ui->studentCoursesTable->setItem(rowcount,1,Name);
         ui->studentCoursesTable->setItem(rowcount,2,Grade);
         ui->courseComboBox->addItem(addThisCourse);
 // }
}




void StudentEditPage::on_setPushButton_clicked()
{
    if(! ui->gradeLineEdit->text().isEmpty())   // || ui->gradeLineEdit->text()!= oldGrade
    {
           QTableWidgetItem *newGrade =new QTableWidgetItem;
           newGrade->setText(ui->gradeLineEdit->text());
         //  studPtr->grades.insert( ui->courseComboBox->currentText(),newGrade.toFloat());
           ui->studentCoursesTable->setItem(ui->courseComboBox->currentIndex(),2,newGrade);
    }
}





void StudentEditPage::on_studentCoursesTable_cellDoubleClicked(int row, int column)
{
     QString deleteThisCourse = ui->allCoursesTable->item(row,0)->text();
     ui->studentCoursesTable->removeRow(row);
     ui->courseComboBox->removeItem(row);
}



void StudentEditPage::on_savePushButton_clicked()
{
if(ui->nameLineEdit->text().isEmpty()||ui->emailLineEdit->text().isEmpty()||ui->phoneLineEdit->text().isEmpty()||ui->idLineEdit->text().isEmpty())
{
<<<<<<< HEAD
    QMessageBox::critical(this,"Error","Empty line");
    return;//وممكن كمان نخليها كيز عشان يطلعلوا ايه الفاضى بالظبط عشان عيون عمر
=======
    QMessageBox::critical(this,"Erorr","Empty line");
    return;//وممكن كمان نخليها كيز عشان يطلعلوا ايه الفاضى بالظبط عضشان عيون عمر
>>>>>>> fa94936290dbb4550fcc7a0bbe9fb963ef7fee0a
}
    studPtr->setFullName(ui->nameLineEdit->text());
    studPtr->setMail(ui->emailLineEdit->text());
    studPtr->setMobile(ui->phoneLineEdit->text());

    int courseNum = ui->studentCoursesTable->rowCount();
<<<<<<< HEAD
    studPtr->grades.clear();
=======
>>>>>>> fa94936290dbb4550fcc7a0bbe9fb963ef7fee0a
    for(int i=0;i<courseNum;i++)
    {
        studPtr->grades.insert(ui->studentCoursesTable->takeItem(i,0)->text(),ui->studentCoursesTable->takeItem(i,2)->text().toFloat());
    }

    studPtr->setID(ui->idLineEdit->text());
    if(ui->idLineEdit->text()!=oldID)
    {
        Student::students.insert(studPtr->getID(),*studPtr);
        Student::students.remove(oldID);
    }


    this->close();
}

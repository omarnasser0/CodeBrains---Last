#include "HomePage.h"
#include "ui_HomePage.h"

#include "admin.h"
#include "professor.h"
#include "course.h"
#include "student.h"

#include "AddCoursePage.h"
#include "AddStudentPage.h"
#include "AddProfessorPage.h"
#include "LoginPage.h"


#include <QProcess>

HomePage::HomePage(QString name, QString username ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

    Admin *admin = new Admin();
    ui->helloLabel->setText("Hello " + name);
    HomePage::username = username;
    HomePage::name = name;

    studentTableDisblay();
    professorTableDisplay();
    courseTableDisplay();
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::studentTableDisblay()
{
    ui->studentTable->setRowCount(0);
    ui->studentTable->setColumnCount(2);

    QStringList firstTitle;
    firstTitle<<"ID"<<"Name";
    ui->studentTable->setHorizontalHeaderLabels(firstTitle);

//    QMap<QString, Student> :: Iterator It = Student::students.begin();

     int rowcount = 0;
     for(auto It : Student::students)
     {
         ui->studentTable->insertRow(rowcount);

         QTableWidgetItem *ID= new QTableWidgetItem;
         QTableWidgetItem *Name= new QTableWidgetItem;

         ID->setText(It.getID());
         Name->setText(It.getFullName());

         ui->studentTable->setItem(rowcount,0,ID);
         ui->studentTable->setItem(rowcount,1,Name);

         rowcount++;
     }
}

void HomePage::professorTableDisplay()
{
    ui->professorTable->setRowCount(0);
    ui->professorTable->setColumnCount(2);

    QStringList firstTitle;
    firstTitle<<"ID"<<"Name";
    ui->professorTable->setHorizontalHeaderLabels(firstTitle);

//    QMap<QString, Student> :: Iterator It = Student::students.begin();

     int rowcount = 0;
     for(auto It : Professor::professors)
     {
         ui->professorTable->insertRow(rowcount);

         QTableWidgetItem *ID= new QTableWidgetItem;
         QTableWidgetItem *Name= new QTableWidgetItem;

         ID->setText(It.getID());
         Name->setText(It.getFullName());

         ui->professorTable->setItem(rowcount,0,ID);
         ui->professorTable->setItem(rowcount,1,Name);

         rowcount++;
     }
}

void HomePage::courseTableDisplay()
{
    ui->courseTable->setRowCount(0);
    ui->courseTable->setColumnCount(2);

    QStringList firstTitle;
    firstTitle<<"Code"<<"Name";
    ui->professorTable->setHorizontalHeaderLabels(firstTitle);

//    QMap<QString, Student> :: Iterator It = Student::students.begin();

     int rowcount = 0;
     for(auto It : Course::courses)
     {
         ui->courseTable->insertRow(rowcount);

         QTableWidgetItem *Code= new QTableWidgetItem;
         QTableWidgetItem *Name= new QTableWidgetItem;

         Code->setText(It.getCode());
         Name->setText(It.getCourseName());

         ui->courseTable->setItem(rowcount,0,Code);
         ui->courseTable->setItem(rowcount,1,Name);

         rowcount++;
    }
}


void HomePage::on_studentTable_cellDoubleClicked(int row, int column)
{
    QString thisId = ui->studentTable->item(row,0)->text();
    QMap<QString,Student>:: Iterator stud = Student::students.find(thisId);
    sip = new StudentInfoPage(this,stud);
    sip->show();
}


void HomePage::on_professorTable_cellDoubleClicked(int row, int column)
{
    QString thisId = ui->professorTable->item(row,0)->text();
    QMap<QString,Professor>:: Iterator prof = Professor::professors.find(thisId);
    pip = new ProfessorInfoPage(this,prof);
    pip->show();
}


void HomePage::on_courseTable_cellDoubleClicked(int row, int column)
{
    QString thisCode = ui->courseTable->item(row,0)->text();
    QMap<QString,Course>:: Iterator cors = Course::courses.find(thisCode);
    cip = new CourseInfoPage(this,cors);
    cip->show();
}


void HomePage::on_logoutButton_clicked()
{
    LoginPage *loginPage = new LoginPage(this);
    loginPage->show();
    this->close();
}


void HomePage::on_infoButton_clicked()
{

    adminInfoPage = new AdminInfoPage(name, username, this);
    adminInfoPage->show();

}


void HomePage::on_refreshPButton_clicked()
{
    ui->professorTable->clear();
    professorTableDisplay();
}


void HomePage::on_RefreshCButton_clicked()
{
    ui->courseTable->clear();
    courseTableDisplay();
}


void HomePage::on_RefreshSButton_clicked()
{
    ui->studentTable->clear();
    studentTableDisblay();
}


void HomePage::on_addStudent_clicked()
{
    AddStudentPage *addStudent;
    addStudent = new AddStudentPage(this);
    addStudent->show();
    addStudent->exec();
}


void HomePage::on_addCourse_clicked()
{
    AddCoursePage *addCourse;
    addCourse = new AddCoursePage(this);
    addCourse->show();
    addCourse->exec();
}


void HomePage::on_addProfessor_clicked()
{
    AddProfessorPage *addproff;
    addproff = new AddProfessorPage(this);
    addproff->show();
    addproff->exec();
}


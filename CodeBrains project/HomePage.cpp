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

#include <QCompleter>
#include <QTableWidgetItem>
#include <QCheckBox>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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

void HomePage::on_lineEdit_stud_textChanged(const QString &arg1)
{
    if(!ui->lineEdit_stud->text().isEmpty()){
        QStringList list;
        foreach (QTableWidgetItem *item, ui->studentTable->findItems(ui->lineEdit_stud->text(), Qt::MatchContains)) {
            list<< item->text();
        }

        QCompleter *complete = new QCompleter(list);
        complete->setCaseSensitivity(Qt::CaseInsensitive);
        complete->setCompletionMode(QCompleter::UnfilteredPopupCompletion);
        ui->lineEdit_stud->setCompleter(complete);
    }


}


void HomePage::on_lineEdit_course_textChanged(const QString &arg1)
{
    if(!ui->lineEdit_course->text().isEmpty()){
        QStringList list;
        foreach (QTableWidgetItem *item, ui->courseTable->findItems(ui->lineEdit_course->text(), Qt::MatchContains)) {
            list<< item->text();
        }

        QCompleter *complete = new QCompleter(list);
        complete->setCaseSensitivity(Qt::CaseInsensitive);
        complete->setCompletionMode(QCompleter::UnfilteredPopupCompletion);
        ui->lineEdit_course->setCompleter(complete);
    }

}


void HomePage::on_lineEdit_prof_textChanged(const QString &arg1)
{
    if(!ui->lineEdit_prof->text().isEmpty()){
        QStringList list;
        foreach (QTableWidgetItem *item, ui->professorTable->findItems(ui->lineEdit_prof->text(), Qt::MatchContains)) {
            list<< item->text();

        }

        QCompleter *complete = new QCompleter(list);
        complete->setCaseSensitivity(Qt::CaseInsensitive);
        complete->setCompletionMode(QCompleter::UnfilteredPopupCompletion);
        ui->lineEdit_prof->setCompleter(complete);
    }

}




void HomePage::on_search_stud_clicked()
{

        QString name = ui->lineEdit_stud->text().toLower();
        int row ;
        QTableWidgetItem *item1;
        QTableWidgetItem *item2;
        for (row =0 ; row < ui->studentTable->rowCount(); row++){
          item1 =  ui->studentTable->item(row, 0);
          item2 =  ui->studentTable->item(row, 1);
          ui->studentTable->setRowHidden(row, name != item1->text().toLower() && name != item2->text().toLower());
        }


}


void HomePage::on_search_course_clicked()
{
    QString name = ui->lineEdit_course->text().toLower();
    int row ;
    QTableWidgetItem *item1;
    QTableWidgetItem *item2;
    for (row =0 ; row < ui->courseTable->rowCount(); row++){
        item1 =  ui->courseTable->item(row, 0);
        item2 =  ui->courseTable->item(row, 1);
      ui->courseTable->setRowHidden(row, name != item1->text().toLower() && name != item2->text().toLower());
    }
}


void HomePage::on_search_prof_clicked()
{

    QString name = ui->lineEdit_prof->text().toLower();
    int row ;

    QTableWidgetItem *item1;
    QTableWidgetItem *item2;
    for (row =0 ; row < ui->professorTable->rowCount(); row++){
        item1 =  ui->professorTable->item(row, 0);
        item2 =  ui->professorTable->item(row, 1);
      ui->professorTable->setRowHidden(row, name != item1->text().toLower() && name != item2->text().toLower());
    }
}




void HomePage::on_build_stud_clicked()
{
    ui->studentTable->clear();
    studentTableDisblay();
}


void HomePage::on_build_course_clicked()
{
    ui->courseTable->clear();
    courseTableDisplay();
}


void HomePage::on_build_prof_clicked()
{
    ui->professorTable->clear();
    professorTableDisplay();
}


void HomePage::on_delete_stud_clicked()
{
    Student::students.remove(ui->lineEdit_stud->text());
    ui->studentTable->clear();
    studentTableDisblay();
}

void HomePage::on_delete_prof_clicked()
{
       Professor::professors.remove(ui->lineEdit_prof->text());
}


void HomePage::on_delete_course_clicked()
{
    Course::courses.remove(ui->lineEdit_course->text());

}


void HomePage::on_save_stud_clicked()
{
    QFile file("C:/Users/zero/Documents/Qt_Project/CodeBrains---Last/CodeBrains project/csvStud.csv");
    if(file.open(QFile::WriteOnly | QFile::Truncate)){
        QTextStream out(&file);
        QStringList listtext ;

        for(int rcount = 0; rcount<ui->studentTable->rowCount(); rcount++){
            listtext.clear();
            for(int ccount = 0; ccount<ui->studentTable->columnCount(); ccount++){
                listtext << "\" "+ui->studentTable->horizontalHeaderItem(ccount)->data(Qt::DisplayRole).toString() + "\" ";
                listtext << "\" "+ui->studentTable->item(rcount,ccount)->text()+ "\" ";
            }
            out << listtext.join( "," )+"\n";
        }
        file.flush();
        file.close();

    }
    else{
        QMessageBox::warning(this, "warning", "File is not open");
    }

}


void HomePage::on_save_course_clicked()
{
    QFile file("C:/Users/zero/Documents/Qt_Project/CodeBrains---Last/CodeBrains project/csvCourse.csv");
    if(file.open(QFile::WriteOnly | QFile::Truncate)){
        QTextStream out(&file);
        QStringList listtext ;

        for(int rcount = 0; rcount<ui->courseTable->rowCount(); rcount++){
            listtext.clear();
            for(int ccount = 0; ccount<ui->courseTable->columnCount(); ccount++){
                listtext << "\" "+ui->courseTable->horizontalHeaderItem(ccount)->data(Qt::DisplayRole).toString() + "\" ";
                listtext << "\" "+ui->courseTable->item(rcount,ccount)->text()+ "\" ";
            }
            out << listtext.join( "," )+"\n";
        }
        file.flush();
        file.close();
    }
    else{
        QMessageBox::warning(this, "warning", "File is not open");
    }
}


void HomePage::on_save_prof_clicked()
{
    QFile file("C:/Users/zero/Documents/Qt_Project/CodeBrains---Last/CodeBrains project/csvProf.csv");
    if(file.open(QFile::WriteOnly | QFile::Truncate)){
        QTextStream out(&file);
        QStringList listtext ;

        for(int rcount = 0; rcount<ui->professorTable->rowCount(); rcount++){
            listtext.clear();
            for(int ccount = 0; ccount<ui->professorTable->columnCount(); ccount++){
                listtext << "\" "+ui->professorTable->horizontalHeaderItem(ccount)->data(Qt::DisplayRole).toString() + "\" ";
                listtext << "\" "+ui->professorTable->item(rcount,ccount)->text()+ "\" ";
            }
            out << listtext.join( "," )+"\n";
        }
        file.flush();
        file.close();
    }
    else{
        QMessageBox::warning(this, "warning", "File is not open");
    }
}

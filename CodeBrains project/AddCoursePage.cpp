#include "AddCoursePage.h"
#include "ui_AddCoursePage.h"
#include "QList"
#include"course.h"
AddCoursePage::AddCoursePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCoursePage)
{
    ui->setupUi(this);

    lecHallCBox();
    dayCBoxDisplay();
    timeCBoxDisplay();

    allStdTableDisplay();
    allPrfTableDisplay();

    addedStdTableDisplay();
    addedPrfTableDisplay();
}

AddCoursePage::~AddCoursePage()
{
    delete ui;
}

void AddCoursePage::lecHallCBox()
{
    for(QMap <QString, LecHall> :: Iterator lh = LecHall::lecHalls.begin();
        lh != LecHall::lecHalls.end();
        lh++)
        ui->lecHallCBox->addItem(lh.key());
}


void AddCoursePage::dayCBoxDisplay()
{
    for(QMap <QString, int> :: Iterator d = LecHall::days.begin();
        d != LecHall::days.end();
        d++)
        ui->dayComboBox->addItem(d.key());
}

void AddCoursePage::timeCBoxDisplay()
{
    LecHall selectedLecHall = LecHall::lecHalls.find(ui->lecHallCBox->currentText()).value();
    QString selectedDay = ui->dayComboBox->currentText();

    QVector <QString> timesAval = selectedLecHall.timesAval(selectedDay);

    for(auto t : timesAval){
        if(selectedLecHall.isAvaliable(selectedDay,t))
            ui->timeComboBox->addItem(t);
    }
    if(ui->timeComboBox->count() == 0)
        ui->timeComboBox->addItem("The Hall is reserved all the day");
}


void AddCoursePage::allStdTableDisplay()
{
    ui->allStudentsTable->setRowCount(0);
    ui->allStudentsTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"ID"<<"Name";
    ui->allStudentsTable->setHorizontalHeaderLabels(hLables);

    int rowcount = 0;
    for(QMap<QString,Student>:: Iterator It = Student::students.begin();
        It!= Student::students.end();
        It++)
    {
        ui->allStudentsTable->insertRow(rowcount);

            QTableWidgetItem *ID= new QTableWidgetItem;
            QTableWidgetItem *Name= new QTableWidgetItem;

            ID->setText(It->getID());
            Name->setText(It->getFullName());

            ui->allStudentsTable->setItem(rowcount,0,ID);
            ui->allStudentsTable->setItem(rowcount,1,Name);

            rowcount++;
    }
}

void AddCoursePage::allPrfTableDisplay()
{
    ui->allProfessorsTable->setRowCount(0);
    ui->allProfessorsTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"ID"<<"Name";
    ui->allProfessorsTable->setHorizontalHeaderLabels(hLables);

    int rowcount = 0;
    for(QMap<QString,Professor>:: Iterator It = Professor::professors.begin();
        It != Professor::professors.end();
        It++)
    {
        ui->allProfessorsTable->insertRow(rowcount);

            QTableWidgetItem *ID= new QTableWidgetItem;
            QTableWidgetItem *Name= new QTableWidgetItem;

            ID->setText(It.key());
            Name->setText(It->getFullName());

            ui->allProfessorsTable->setItem(rowcount,0,ID);
            ui->allProfessorsTable->setItem(rowcount,1,Name);

            rowcount++;
    }
}


void AddCoursePage::addedStdTableDisplay()
{
    ui->addedStudentsTable->setRowCount(0);
    ui->addedStudentsTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"ID"<<"Name";
    ui->addedStudentsTable->setHorizontalHeaderLabels(hLables);
}

void AddCoursePage::addedPrfTableDisplay()
{
    ui->addedProfessorsTable->setRowCount(0);
    ui->addedProfessorsTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"ID"<<"Name";
    ui->addedProfessorsTable->setHorizontalHeaderLabels(hLables);
}


void AddCoursePage::on_addPushButton_clicked()
{
    newCourse.setCourseName(ui->nameLineEdit->text());
    newCourse.setCode(ui->codeLineEdit->text());
    newCourse.setLecHall(ui->lecHallCBox->currentText());
    newCourse.setLecDay(ui->dayComboBox->currentText());
    newCourse.setLecTime(ui->timeComboBox->currentText());

    LecHall::lecHalls.find(newCourse.getLecHall())->reserve(newCourse.getLecDay(),newCourse.getLecTime());

    int studNum = ui->addedStudentsTable->rowCount();
    int profNum = ui->addedProfessorsTable->rowCount();

        for(int s = 0; s < studNum; s++){
            QString studId = ui->addedStudentsTable->item(s,0)->text();
            newCourse.studentsGrade.insert(studId,0);
        }

        for(int p = 0; p < profNum; p++){
            QString profId = ui->addedProfessorsTable->item(p,0)->text();
            newCourse.professorsForCourse.push_front(profId);
        }

    Course::courses.insert(newCourse.getCode(),newCourse);

    this->close();
}


void AddCoursePage::on_deleteSButton_clicked()
{
    ui->addedStudentsTable->removeRow(ui->addedStudentsTable->currentRow());
}


void AddCoursePage::on_deletePButton_clicked()
{
    ui->addedProfessorsTable->removeRow(ui->addedProfessorsTable->currentRow());
}


void AddCoursePage::on_allStudentsTable_cellDoubleClicked(int row, int column)
{
    int rowcount = ui->addedStudentsTable->rowCount();

    ui->addedStudentsTable->insertRow(rowcount);

    QString thisId = ui->allStudentsTable->item(row,0)->text();
    QMap<QString,Student>:: Iterator stud = Student::students.find(thisId);

        QTableWidgetItem *ID= new QTableWidgetItem;
        QTableWidgetItem *Name= new QTableWidgetItem;

        ID->setText(stud->getID());
        Name->setText(stud->getFullName());

        ui->addedStudentsTable->setItem(rowcount,0,ID);
        ui->addedStudentsTable->setItem(rowcount,1,Name);
}


void AddCoursePage::on_allProfessorsTable_cellDoubleClicked(int row, int column)
{
    int rowcount = ui->addedProfessorsTable->rowCount();

    ui->addedProfessorsTable->insertRow(rowcount);

    QString thisId = ui->allProfessorsTable->item(row,0)->text();
    QMap<QString,Professor>:: Iterator prof = Professor::professors.find(thisId);

        QTableWidgetItem *ID= new QTableWidgetItem;
        QTableWidgetItem *Name= new QTableWidgetItem;

        ID->setText(prof->getID());
        Name->setText(prof->getFullName());

        ui->addedProfessorsTable->setItem(rowcount,0,ID);
        ui->addedProfessorsTable->setItem(rowcount,1,Name);
}

#include "CourseEditPage.h"
#include "ui_CourseEditPage.h"

CourseEditPage::CourseEditPage(QWidget *parent,QMap<QString,Course>:: Iterator corsIt) :
    QDialog(parent),
    ui(new Ui::CourseEditPage)
{
    ui->setupUi(this);

    editedCors = corsIt.value();

    ui->FLNameLabel->setText(corsIt->getCourseName());
    ui->nameLineEdit->setText(corsIt->getCourseName());
    ui->idLabel->setText(corsIt->getCode());

    lecHallComboboxdisplay();
    dayComboboxdisplay();
    timeComboboxdisplay();

    allStdTableDisplay();
    allPrfTableDisplay();

    addedStdTableDisplay();
    addedPrfTableDisplay();
}

CourseEditPage::~CourseEditPage()
{
    delete ui;
}

void CourseEditPage::lecHallComboboxdisplay()
{
    QStringList lecHallsList;

    for(auto v : LecHall::lecHalls)
        lecHallsList.push_front(v.getName());

    for(int lh = 0; lh < lecHallsList.size(); lh++)
        ui->lecHallCBox->addItem(lecHallsList[lh]);
}

void CourseEditPage::dayComboboxdisplay()
{
    QStringList days;

    days.push_front("Thursday");
    days.push_front("Wednesday");
    days.push_front("Tuesday");
    days.push_front("Monday");
    days.push_front("Sunday");
    days.push_front("Saturday");

    for(int d = 0; d < days.size(); d++)
        ui->dayComboBox->addItem(days[d]);
}

void CourseEditPage::timeComboboxdisplay()
{
    QStringList timeAvalList;

    QString lecHallSelected = ui->lecHallCBox->currentText();

    QMap<QString,LecHall> :: Iterator lhIt = LecHall::lecHalls.find(lecHallSelected);

    QString     daySelected =ui->dayComboBox->currentText();

//    for(QMap <QString,int> :: Iterator t = LecHall::times.begin();
//        t != LecHall::times.end();
//        t++)
//        if(lhIt->isAvaliable(daySelected,t.key()))
//            timeAvalList.push_front(t.key());
    timeAvalList = lhIt->timesAval(daySelected);

    for(int lh = 0; lh < timeAvalList.size(); lh++)
        ui->timeComboBox->addItem(timeAvalList[lh]);
}

void CourseEditPage::allStdTableDisplay()
{
    ui->allStudentsTable->setRowCount(0);
    ui->allStudentsTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"Name"<<"Grade";
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

void CourseEditPage::allPrfTableDisplay()
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

void CourseEditPage::addedStdTableDisplay()
{
    ui->addedStudentsTable->setRowCount(0);
    ui->addedStudentsTable->setColumnCount(3);

    QStringList hLables;
    hLables<<"Name"<<"Grade";
    ui->addedStudentsTable->setHorizontalHeaderLabels(hLables);

    int rowcount = 0;
    for(QMap<QString,float>:: Iterator It = editedCors.studentsGrade.begin();
        It != editedCors.studentsGrade.end();
        It++)
    {
        ui->addedStudentsTable->insertRow(rowcount);

        QTableWidgetItem *ID= new QTableWidgetItem;
        QTableWidgetItem *Name= new QTableWidgetItem;
        QTableWidgetItem *Grade= new QTableWidgetItem;

        ID->setText(It.key());
        Name->setText(Student::students.find(It.key())->getFullName());
        Grade->setText(QString::number(It.value()));

        ui->addedStudentsTable->setItem(rowcount,0,ID);
        ui->addedStudentsTable->setItem(rowcount,1,Name);
        ui->addedStudentsTable->setItem(rowcount,2,Grade);

        rowcount++;
    }
}

void CourseEditPage::addedPrfTableDisplay()
{
    ui->addedProfessorsTable->setRowCount(0);
    ui->addedProfessorsTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"ID"<<"Name";
    ui->addedProfessorsTable->setHorizontalHeaderLabels(hLables);

    int rowcount = 0;

    for(auto p : editedCors.professorsForCourse){
            ui->addedProfessorsTable->insertRow(rowcount);

            QTableWidgetItem *ID= new QTableWidgetItem;
            QTableWidgetItem *Name= new QTableWidgetItem;

            ID->setText(p);
            Name->setText(Professor::professors.find(p)->getFullName());

            ui->addedProfessorsTable->setItem(rowcount,0,ID);
            ui->addedProfessorsTable->setItem(rowcount,1,Name);

            rowcount++;
    }
}


void CourseEditPage::on_SavePushButton_clicked()
{
    editedCors.setCourseName(ui->nameLineEdit->text());
    editedCors.setLecHall(ui->lecHallCBox->currentText());
    editedCors.setLecDay(ui->dayComboBox->currentText());
    editedCors.setLecTime(ui->timeComboBox->currentText());

    int studNum = ui->addedStudentsTable->rowCount();
    int profNum = ui->addedProfessorsTable->rowCount();

        for(int s = 0; s < studNum; s++){
            QString studId = ui->addedStudentsTable->item(s,0)->text();
            editedCors.studentsGrade.insert(studId,0);
        }

        for(int p = 0; p < profNum; p++){
            QString profId = ui->addedProfessorsTable->item(p,0)->text();
            editedCors.professorsForCourse.push_front(profId);
        }

    Course::courses.insert(editedCors.getCode(),editedCors);
    this->close();
}


void CourseEditPage::on_allStudentsTable_cellDoubleClicked(int row, int column)
{
    int rowcount = ui->addedStudentsTable->rowCount();

    ui->addedStudentsTable->insertRow(rowcount);

    QString thisId = ui->allStudentsTable->item(row,0)->text();
    QMap<QString,Student>:: Iterator stud = Student::students.find(thisId);

        QTableWidgetItem *ID= new QTableWidgetItem;
        QTableWidgetItem *Name= new QTableWidgetItem;
        QTableWidgetItem *Grade= new QTableWidgetItem;

        ID->setText(stud->getID());
        Name->setText(stud->getFullName());
        Grade->setText(QString::number(stud->grades.find(editedCors.getCode()).value()));

        ui->addedStudentsTable->setItem(rowcount,0,ID);
        ui->addedStudentsTable->setItem(rowcount,1,Name);
        ui->addedStudentsTable->setItem(rowcount,2,Grade);

}


void CourseEditPage::on_allProfessorsTable_cellDoubleClicked(int row, int column)
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


void CourseEditPage::on_deleteSButton_clicked()
{
    ui->addedStudentsTable->removeRow(ui->addedStudentsTable->currentRow());
}


void CourseEditPage::on_deletePButton_clicked()
{
    ui->addedProfessorsTable->removeRow(ui->addedProfessorsTable->currentRow());
}

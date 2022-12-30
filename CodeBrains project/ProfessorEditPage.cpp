#include "ProfessorEditPage.h"
#include "ui_ProfessorEditPage.h"

#include <QAction>

#include "course.h"

ProfessorEditPage::ProfessorEditPage(QWidget *parent,QMap<QString,Professor>:: Iterator profIt) :
    QDialog(parent),
    ui(new Ui::ProfessorEditPage)
{
    ui->setupUi(this);

    editedProf = profIt.value();

    ui->FLNameLabel->setText(profIt->getFirstLastName());
    ui->nameLineEdit->setText(profIt->getFullName());
    ui->idLabel->setText(profIt->getID());
    ui->titleLineEdit->setText(profIt->getTitle());
    ui->emailLineEdit->setText(profIt->getMail());
    ui->phoneLineEdit->setText(profIt->getMobile());

    courseComboBoxDisplay();
    allCoursesTableDisplay();
}

ProfessorEditPage::~ProfessorEditPage()
{
    delete ui;
}

void ProfessorEditPage::courseComboBoxDisplay()
{
    QStringList coursesList;

    for(auto v : editedProf.coursesForProfessor)
        coursesList.push_front(v.getCode());

    for(int c = 0; c < coursesList.size(); c++)
        ui->courseComboBox->addItem(coursesList[c]);
}

void ProfessorEditPage::allCoursesTableDisplay()
{
    ui->allCoursesTable->setRowCount(editedProf.coursesForProfessor.size());
    ui->allCoursesTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"ID"<<"Name";
    ui->allCoursesTable->setHorizontalHeaderLabels(hLables);

    int rowcount = 0;
    for(QMap<QString,Course>:: Iterator it = Course::courses.begin();
        it!= Course::courses.end();
        it++)
    {
        ui->allCoursesTable->insertRow(rowcount);

        QTableWidgetItem *ID= new QTableWidgetItem;
        QTableWidgetItem *Name= new QTableWidgetItem;

        ID->setText(it.key());
        Name->setText(it->getCourseName());

        ui->allCoursesTable->setItem(rowcount,0,ID);
        ui->allCoursesTable->setItem(rowcount,1,Name);

    }
}

/*
ui->studentTableInfo->setRowCount(sit.grades.size());
ui->studentTableInfo->setColumnCount(2);

QStringList hLables;
hLables<<"Name"<<"Grade";
ui->studentTableInfo->setHorizontalHeaderLabels(hLables);

int rowcount = 0;
for(QMap<QString,float>:: Iterator It = sit.grades.begin();
    It!= sit.grades.end();
    It++)
{
    ui->studentTableInfo->insertRow(rowcount);

    QTableWidgetItem *Name= new QTableWidgetItem;
    QTableWidgetItem *Grade= new QTableWidgetItem;

    Name->setText(Course::courses.find(It.key())->getCourseName());
    Grade->setText(QString::number(It.value()));

    ui->studentTableInfo->setItem(rowcount,0,Name);
    ui->studentTableInfo->setItem(rowcount,1,Grade);

    rowcount++;
}*/


void ProfessorEditPage::on_allCoursesTable_cellDoubleClicked(int row, int column)
{
    QString thisId = ui->allCoursesTable->item(row,0)->text();
    ui->courseComboBox->addItem(thisId);

}


void ProfessorEditPage::on_deletePushButton_clicked()
{
    ui->courseComboBox->removeItem(ui->courseComboBox->currentIndex());
}


void ProfessorEditPage::on_savePushButton_clicked()
{
    editedProf.setFullName(ui->nameLineEdit->text());
    editedProf.setMail(ui->emailLineEdit->text());
    editedProf.setMobile(ui->phoneLineEdit->text());
    editedProf.setTitle(ui->titleLineEdit->text());

    int coursesNum = ui->courseComboBox->count();

    for(int i = 0; i < coursesNum; i++){
       editedProf.coursesForProfessor.push_back(Course::courses.find(ui->courseComboBox->currentText()).value());
       ui->courseComboBox->removeItem(ui->courseComboBox->currentIndex());
    }

    Professor::professors.insert(editedProf.getID(),editedProf);

    emit saveSignal();

    this->close();

}

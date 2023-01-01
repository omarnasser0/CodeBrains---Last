#include "ProfessorEditPage.h"
#include "ui_ProfessorEditPage.h"
#include<QMessageBox>
#include <QAction>

#include "course.h"

ProfessorEditPage::ProfessorEditPage(QWidget *parent,QMap<QString,Professor>:: Iterator profIt) :
    QDialog(parent),
    ui(new Ui::ProfessorEditPage)
{
    ui->setupUi(this);

    oldID=profIt->getID();


    ui->FLNameLabel->setText(profIt->getFirstLastName());
    ui->nameLineEdit->setText(profIt->getFullName());
    ui->idLineEdit->setText(profIt->getID());
    ui->titleLineEdit->setText(profIt->getTitle());
    ui->emailLineEdit->setText(profIt->getMail());
    ui->phoneLineEdit->setText(profIt->getMobile());

    profPtr = &profIt.value();

    courseComboBoxDisplay();
    allCoursesTableDisplay();
}

ProfessorEditPage::~ProfessorEditPage()
{
    delete ui;
}

void ProfessorEditPage::courseComboBoxDisplay()
{
    for(auto v : profPtr->coursesForProfessor)
        ui->courseComboBox->addItem(v.getCode());
}

void ProfessorEditPage::allCoursesTableDisplay()
{
    ui->allCoursesTable->setRowCount(0);
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

        rowcount++;
    }
}


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
    if(ui->nameLineEdit->text().isEmpty()||ui->emailLineEdit->text().isEmpty()||ui->phoneLineEdit->text().isEmpty()||ui->idLineEdit->text().isEmpty()||ui->titleLineEdit->text().isEmpty())
    {
        QMessageBox::critical(this,"Error","Empty line");
        return;//وممكن كمان نخليها كيز عشان يطلعلوا ايه الفاضى بالظبط عضشان عيون عمر
    }

    profPtr->setFullName(ui->nameLineEdit->text());
    profPtr->setMail(ui->emailLineEdit->text());
    profPtr->setMobile(ui->phoneLineEdit->text());
    profPtr->setTitle(ui->titleLineEdit->text());

    int coursesNum = ui->courseComboBox->count();
    profPtr->coursesForProfessor.clear();
   for(int i = 0; i < coursesNum; i++)
    {



       profPtr->coursesForProfessor.insert(i,Course::courses.find(ui->courseComboBox->itemText(i)).value());


    }

    profPtr->setID(ui->idLineEdit->text());
    if(ui->idLineEdit->text()!=oldID)
    {
        Professor::professors.insert(profPtr->getID(),*profPtr);
        Professor::professors.remove(oldID);
    }


    this->close();

}

#include "AddStudentPage.h"
#include "ui_AddStudentPage.h"

AddStudentPage::AddStudentPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStudentPage)
{
    ui->setupUi(this);
}

AddStudentPage::~AddStudentPage()
{
    delete ui;
}

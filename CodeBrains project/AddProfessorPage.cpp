#include "AddProfessorPage.h"
#include "ui_AddProfessorPage.h"

AddProfessorPage::AddProfessorPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProfessorPage)
{
    ui->setupUi(this);
}

AddProfessorPage::~AddProfessorPage()
{
    delete ui;
}

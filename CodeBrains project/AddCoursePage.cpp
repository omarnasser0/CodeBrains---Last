#include "AddCoursePage.h"
#include "ui_AddCoursePage.h"

AddCoursePage::AddCoursePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCoursePage)
{
    ui->setupUi(this);
}

AddCoursePage::~AddCoursePage()
{
    delete ui;
}

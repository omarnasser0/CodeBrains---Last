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

void AddProfessorPage::on_bottum_add_clicked()
{
    QString name=ui->line_name->text(),id=ui->line_ID->text(),phone=ui->line_phone->text(),
            mail=ui->line_mail->text(),title=ui->line_title->text();
    Professor *prof=new Professor(name,phone,mail,id,title);
  Professor::professors.insert(id,*prof);
}


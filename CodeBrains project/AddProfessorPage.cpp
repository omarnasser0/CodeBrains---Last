#include "AddProfessorPage.h"
#include "ui_AddProfessorPage.h"
AddProfessorPage::AddProfessorPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProfessorPage)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
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

    ui->line_ID->clear();
    ui->line_mail->clear();
    ui->line_name->clear();
    ui->line_phone->clear();
    ui->line_title->clear();

    this->close();
}

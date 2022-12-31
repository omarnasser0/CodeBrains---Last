#include "AddStudentPage.h"
#include "ui_AddStudentPage.h"

AddStudentPage::AddStudentPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStudentPage)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
}

AddStudentPage::~AddStudentPage()
{
    delete ui;
}

void AddStudentPage::on_buttomadd_clicked()
{
    QString name=ui->line_name->text(),
            id=ui->line_ID->text(),
            age=ui->line_Age->text(),
            mail=ui->line_mail->text(),
            phone=ui->line_phone->text();
    Student *student=new Student(name,phone,mail,id,age);
    Student::students.insert(id,*student);
    this->close();
}

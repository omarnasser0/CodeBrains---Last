#include "AddStudentPage.h"
#include "ui_AddStudentPage.h"
#include <QMessageBox>

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

   auto It =Student::students.find(ui->line_ID->text());
   if(It !=  Student::students.end())
   {
        QMessageBox ::critical(this,"ERROR","This Id is used");
        return;
   }
    QString name=ui->line_name->text(),

            age=ui->line_Age->text(),
            mail=ui->line_mail->text(),
            phone=ui->line_phone->text();
    Student *student=new Student(name,phone,mail,ui->line_ID->text(),age);
    Student::students.insert(ui->line_ID->text(),*student);
    this->close();
}

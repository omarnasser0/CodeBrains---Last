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

void AddStudentPage::on_pushButton_clicked()
{

}


void AddStudentPage::on_buttomadd_clicked()
{
    QString name=ui->line_name->text(),
            id=ui->line_ID->text(),
            gpa=ui->line_GP->text(),
            age=ui->line_Age->text(),
            mail=ui->line_mail->text(),
            phone=ui->line_phone->text(),
         total=ui->line_total_grade->text();
    float total_grade=total.toFloat();

    //Student *student=new Student(name,phone,mail,id,gpa,total_grade,age);
   // Student::students.insert(id,*student);


}


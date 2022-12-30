#include "LoginPage.h"
#include "./ui_LoginPage.h"
#include "admin.h"
#include <QPixmap>
#include <QMessageBox>

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);




}

LoginPage::~LoginPage()
{
    delete ui;
}


void LoginPage::on_loginButton_clicked()
{
    Admin *admin = new Admin();

    if(admin->loginCheck(ui->usernamLlineEdit->text(),ui->passworLlineEdit->text())){
        hide();
        homePage = new HomePage(admin->getFullName(ui->usernamLlineEdit->text()),ui->usernamLlineEdit->text() , this);
        homePage->show();
    }
    else{
        QMessageBox::critical(this,"Error","Incorrect Username or Password");
    }
}


void LoginPage::on_registerButton_clicked()
{
    hide();
    signupPage = new SignupPage(this);
    signupPage->show();
}


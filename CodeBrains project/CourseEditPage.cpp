#include "CourseEditPage.h"
#include "ui_CourseEditPage.h"

CourseEditPage::CourseEditPage(QWidget *parent,QMap<QString,Course>:: Iterator corsIt) :
    QDialog(parent),
    ui(new Ui::CourseEditPage)
{
    ui->setupUi(this);

    editedCors = corsIt.value();

    ui->FLNameLabel->setText(corsIt->getCourseName());
    ui->nameLineEdit->setText(corsIt->getCourseName());
    ui->idLabel->setText(corsIt->getCode());

    lecHallComboboxdisplay();
}

CourseEditPage::~CourseEditPage()
{
    delete ui;
}

void CourseEditPage::lecHallComboboxdisplay()
{
    QStringList lecHallsList;

    for(auto v : LecHall::lecHalls)
        lecHallsList.push_front(v.getName());

    for(int lh = 0; lh < lecHallsList.size(); lh++)
        ui->lecHallCBox->addItem(lecHallsList[lh]);
}

void CourseEditPage::dayComboboxdisplay()
{
    QStringList days;

    days.push_front("Saturday");
    days.push_front("Sunday");
    days.push_front("Monday");
    days.push_front("Tuesday");
    days.push_front("Wednesday");
    days.push_front("Thursday");

    for(int d = 0; d < days.size(); d++)
        ui->lecHallCBox->addItem(days[d]);
}

void CourseEditPage::timeComboboxdisplay()
{
    QStringList timeAvalList;

    QString lecHallSelected = ui->lecHallCBox->currentText();
    QMap<QString,LecHall> :: Iterator lhIt = LecHall::lecHalls.find(lecHallSelected);

    int daySelected =LecHall::days.find(ui->dayComboBox->currentText()).value();

    for(QMap <QString,int> :: Iterator t = LecHall::times.begin();
        t != LecHall::times.end();
        t++)
        if(lhIt->isAvaliable(t.value(),daySelected))
            timeAvalList.push_front(t.key());

    for(int lh = 0; lh < timeAvalList.size(); lh++)
        ui->timeComboBox->addItem(timeAvalList[lh]);
}

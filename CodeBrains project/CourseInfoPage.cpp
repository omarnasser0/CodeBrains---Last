#include "CourseInfoPage.h"
#include "ui_CourseInfoPage.h"

CourseInfoPage::CourseInfoPage(QWidget *parent, QMap<QString,Course>:: Iterator cIt) :
    QDialog(parent),
    ui(new Ui::CourseInfoPage)
{
    ui->setupUi(this);

    cors = cIt.value();

    ui->nameLabel->setText(cIt->getCourseName());
    ui->codeLabel->setText(cIt->getCode());
    ui->lecHallLabel->setText(cIt->getLecHall());
    ui->timeLabel_1->setText(cIt->getLecTime());

    studentsTableDisplay();
    professorTableDisplay();
}

CourseInfoPage::~CourseInfoPage()
{
    delete ui;
}

void CourseInfoPage::studentsTableDisplay()
{
    ui->studentsInCourseTable->setRowCount(cors.studentsGrade.size());
    ui->studentsInCourseTable->setColumnCount(2);

    QStringList hLables;
    hLables<<"Name"<<"Grade";
    ui->studentsInCourseTable->setHorizontalHeaderLabels(hLables);

    int rowcount = 0;
    for(QMap<QString,float>:: Iterator It = cors.studentsGrade.begin();
        It!= cors.studentsGrade.end();
        It++)
    {
        ui->studentsInCourseTable->insertRow(rowcount);

            QTableWidgetItem *Name= new QTableWidgetItem;
            QTableWidgetItem *Grade= new QTableWidgetItem;

            Name->setText(Course::courses.find(It.key())->getCourseName());
            Grade->setText(QString::number(It.value()));

            ui->studentsInCourseTable->setItem(rowcount,0,Name);
            ui->studentsInCourseTable->setItem(rowcount,1,Grade);

            rowcount++;
    }

}

void CourseInfoPage::professorTableDisplay()
{
    for(auto it : cors.professorsForCourse){
        ui->professorsInCListView->addItem(it);
    }
}

//int rowcount = 0;
//for(QMap<QString,float>:: Iterator It = sit.grades.begin();
//    It!= sit.grades.end();
//    It++)
//{
//    ui->studentTableInfo->insertRow(rowcount);

//    QTableWidgetItem *Name= new QTableWidgetItem;
//    QTableWidgetItem *Grade= new QTableWidgetItem;

//    Name->setText(Course::courses.find(It.key())->getCourseName());
//    Grade->setText(QString::number(It.value()));

//    ui->studentTableInfo->setItem(rowcount,0,Name);
//    ui->studentTableInfo->setItem(rowcount,1,Grade);

//    rowcount++;
//}

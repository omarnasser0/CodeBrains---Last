#include "LoginPage.h"

#include "professor.h"
#include "student.h"
#include "course.h"
#include "LecHall.h"

#include <QApplication>
#include<QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile ssfile("./Diffnes.qss");

    ssfile.open(QFile::ReadOnly);

    QString ssstring = QLatin1String(ssfile.readAll());

    a.setStyleSheet(ssstring);

    LoginPage w;
    w.show();

    QString v1 = "Omar Abdulnasser Shaban";
    QString v = "85285";
    int n =5;
    QChar c = 'g';
    float nn = 5.5;

    LecHall lh3200("3200");
    LecHall lh3201("3201");
    LecHall lh3202("3202");
    LecHall lh3100("3100");
    LecHall lh3101("3101");
    LecHall lh3102("3102");

    LecHall::lecHalls = {
        {lh3200.getName(),lh3200},
        {lh3201.getName(),lh3201},
        {lh3202.getName(),lh3202},
        {lh3100.getName(),lh3100},
        {lh3101.getName(),lh3101},
        {lh3102.getName(),lh3102},
    };

    Course DT("Data","CMP1010","3100",{5,1});
    Course BM("Measre","ELC5555","3101",{2,2});
    Course ELC("ELC","ELC1115","3101",{0,1});


    Student x1(v1,v,v1,v,c,nn,n);
    Student x2("ASG",v,v1,"98994",c,nn,n);


    DT.studentsGrade.insert(x1.getFullName(),x1.grades.value(DT.getCode()));
    DT.studentsGrade.insert(x2.getFullName(),x1.grades.value(DT.getCode()));

    Course::courses.insert(DT.getCode(),DT);
    Course::courses.insert(BM.getCode(),BM);

    x1.grades.insert(DT.getCode(),100);
    x1.grades.insert(BM.getCode(),88);

    x2.grades.insert(DT.getCode(),99);
    x2.grades.insert(BM.getCode(),77);

    Student::students.insert(x1.getID(),x1);

    Professor AH("Ahmed Hesham","0101010101","ahmed@sbme.com","1313","Dr");
    Professor SS("Shreif Sami","010000000","ss@sbme.net","5555","phd");
    Professor MI("Mohammed Islam","0101010101","ahmed@sbme.com","1111","Dr");


    AH.coursesForProfessor.push_back(DT);
    SS.coursesForProfessor.push_back(BM);
    MI.coursesForProfessor.push_back(ELC);

    DT.professorsForCourse.push_front(AH.getFullName());
    DT.professorsForCourse.push_front(SS.getFullName());
    DT.professorsForCourse.push_front(MI.getFullName());

    Professor::professors.insert(AH.getID(),AH);
    Professor::professors.insert(SS.getID(),SS);

    return a.exec();
}

#ifndef COURSE_H
#define COURSE_H
#include <QString>
#include<QMap>
class Course {
    private:
        QString name;
        QString code;
        QString lecHall;
      //  std::map <QString, float> students;
        std::pair <int, int> time;

    public:

        QVector<QString> professorsForCourse;

         //code--->course
         static QMap<QString, Course> courses;

         //ID_Student---->grade
         QMap<QString, float> studentsGrade;

        Course();
      Course(QString n, QString c, QString hall, std::pair<int, int> time);

        QString getCourseName();
        QString getCode();
        QString getLecHall();
        QString getLecTime();
        void setCourseName(QString);
        void setCode(QString);
        void setLecHall(QString);
        void setLecTime(std::pair<int, int> time);

         //void add_stud();
        //void add_prof();


};
#endif // COURSE_H







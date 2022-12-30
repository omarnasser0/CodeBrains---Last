#include "AddCoursePage.h"
#include "ui_AddCoursePage.h"
#include "QList"
#include"course.h"
AddCoursePage::AddCoursePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCoursePage)

 {

    ui->setupUi(this);
    ui->combo_time->addItem(" ");
    ui->combo_time->addItem("8:30");
    ui->combo_time->addItem("10:15");
    ui->combo_time->addItem("12:15");
    ui->combo_time->addItem("2:00");
    ui->combo_time->addItem("3:45");
    ui->combo_time->addItem("4:00");
    ui->combo_time->addItem("4:45");
   // ui->comboStudentList->hasFrame();
    ui->comboStudentList->addItem(" ");
      for(auto It: Student::students){

      ui->comboStudentList->addItem(It.getFullName());

      }

      ui->combo_professor->addItem(" ");
    for(auto It:Professor::professors )
   {
        ui->combo_professor->addItem(It.getFullName());

    }
}
AddCoursePage::~AddCoursePage()
{
    delete ui;
}


/*void AddCoursePage::TablewidgetDisplay(){
    QTableWidget *table=new QTableWidget(this);
    table->setRowCount(5);
    table->setColumnCount(1);
    QStringList lable;
    lable<<"selected prof";
    table->setHorizontalHeaderLabels(lable);
}
*/

void AddCoursePage::on_add_course_butom_clicked()
{
    QString name=ui->line_name_course->text(),code=ui->line_code_course->text(),
            lec=ui->line_lec->text(),
            time=ui->combo_time->currentText();

//      Course *course=new Course(name,code,lec,time);
//       for(int i=0;i<ui->selectedStudenListt->count();i++){
//           course->StudrntsForCourse.push_back(ui->selectedStudenListt->item(i)->text());
//       }
//       for(int j=0;j<ui->selectedProfessorList->count();j++){
//           course->professorsForCourse.push_back(ui->selectedProfessorList->item(j)->text());
//       }
//     Course::courses.insert(code,*course);

}




void AddCoursePage::on_comboStudentList_currentTextChanged(const QString &arg1)
{
    ui->selectedStudenListt->addItem(arg1);

}


void AddCoursePage::on_selectedStudenListt_itemDoubleClicked(QListWidgetItem *item)
{
    delete item;
}


void AddCoursePage::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    delete item;
}


void AddCoursePage::on_combo_professor_currentTextChanged(const QString &arg1)
{
    ui->selectedProfessorList->addItem(arg1);
}


void AddCoursePage::on_selectedProfessorList_itemDoubleClicked(QListWidgetItem *item)
{
    delete item;
}


#ifndef ADDSTUDENTPAGE_H
#define ADDSTUDENTPAGE_H

#include <QDialog>

namespace Ui {
class AddStudentPage;
}

class AddStudentPage : public QDialog
{
    Q_OBJECT

public:
    explicit AddStudentPage(QWidget *parent = nullptr);
    ~AddStudentPage();

private:
    Ui::AddStudentPage *ui;
};

#endif // ADDSTUDENTPAGE_H

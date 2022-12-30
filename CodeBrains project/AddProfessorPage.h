#ifndef ADDPROFESSORPAGE_H
#define ADDPROFESSORPAGE_H

#include <QDialog>

namespace Ui {
class AddProfessorPage;
}

class AddProfessorPage : public QDialog
{
    Q_OBJECT

public:
    explicit AddProfessorPage(QWidget *parent = nullptr);
    ~AddProfessorPage();

private:
    Ui::AddProfessorPage *ui;
};

#endif // ADDPROFESSORPAGE_H

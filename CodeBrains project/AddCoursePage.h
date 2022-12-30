#ifndef ADDCOURSEPAGE_H
#define ADDCOURSEPAGE_H

#include <QDialog>

namespace Ui {
class AddCoursePage;
}

class AddCoursePage : public QDialog
{
    Q_OBJECT

public:
    explicit AddCoursePage(QWidget *parent = nullptr);
    ~AddCoursePage();

private:
    Ui::AddCoursePage *ui;
};

#endif // ADDCOURSEPAGE_H

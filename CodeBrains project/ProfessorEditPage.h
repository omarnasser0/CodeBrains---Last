#ifndef PROFESSOREDITPAGE_H
#define PROFESSOREDITPAGE_H

#include <QDialog>

#include "professor.h"

namespace Ui {
class ProfessorEditPage;
}

class ProfessorEditPage : public QDialog
{
    Q_OBJECT

public:
    explicit ProfessorEditPage(QWidget *parent = nullptr,QMap<QString,Professor>:: Iterator profIt = {});
//    explicit ProfessorEditPage(QWidget *parent = nullptr,Professor &passedProf() = nullptr);
    ~ProfessorEditPage();

    void courseComboBoxDisplay();
    void allCoursesTableDisplay();

private slots:

    void on_allCoursesTable_cellDoubleClicked(int row, int column);

    void on_deletePushButton_clicked();

    void on_savePushButton_clicked();

private:
    Ui::ProfessorEditPage *ui;
    Professor editedProf;
};

#endif // PROFESSOREDITPAGE_H

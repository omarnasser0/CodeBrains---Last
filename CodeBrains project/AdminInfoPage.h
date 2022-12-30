#ifndef ADMININFOPAGE_H
#define ADMININFOPAGE_H

#include <QDialog>
#include "AdminEditPage.h"

namespace Ui {
class AdminInfoPage;
}

class AdminInfoPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminInfoPage(QString name, QString username,QWidget *parent = nullptr);
    ~AdminInfoPage();

private slots:
    void on_editButton_clicked();

private:
    Ui::AdminInfoPage *ui;
    AdminEditPage *adminEditPage;
    QString name;
    QString username;
};

#endif // ADMININFOPAGE_H

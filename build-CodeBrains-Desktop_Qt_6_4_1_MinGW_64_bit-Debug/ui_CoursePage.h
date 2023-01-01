/********************************************************************************
** Form generated from reading UI file 'CoursePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEPAGE_H
#define UI_COURSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CoursePage
{
public:

    void setupUi(QDialog *CoursePage)
    {
        if (CoursePage->objectName().isEmpty())
            CoursePage->setObjectName("CoursePage");
        CoursePage->resize(400, 300);

        retranslateUi(CoursePage);

        QMetaObject::connectSlotsByName(CoursePage);
    } // setupUi

    void retranslateUi(QDialog *CoursePage)
    {
        CoursePage->setWindowTitle(QCoreApplication::translate("CoursePage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoursePage: public Ui_CoursePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEPAGE_H

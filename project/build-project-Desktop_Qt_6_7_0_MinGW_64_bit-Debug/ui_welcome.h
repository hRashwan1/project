/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcome
{
public:
    QLabel *hello;
    QPushButton *logout;

    void setupUi(QDialog *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName("welcome");
        welcome->resize(400, 300);
        hello = new QLabel(welcome);
        hello->setObjectName("hello");
        hello->setGeometry(QRect(30, 20, 91, 21));
        logout = new QPushButton(welcome);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(30, 240, 80, 24));

        retranslateUi(welcome);

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QDialog *welcome)
    {
        welcome->setWindowTitle(QCoreApplication::translate("welcome", "Dialog", nullptr));
        hello->setText(QCoreApplication::translate("welcome", "Hello", nullptr));
        logout->setText(QCoreApplication::translate("welcome", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H

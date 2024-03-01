/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lgnusername;
    QLineEdit *lgnpass;
    QLabel *lbluser;
    QLabel *lblpass;
    QPushButton *Login;
    QPushButton *register_2;
    QLabel *errorlabel;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lgnusername = new QLineEdit(centralwidget);
        lgnusername->setObjectName("lgnusername");
        lgnusername->setGeometry(QRect(190, 80, 113, 24));
        lgnpass = new QLineEdit(centralwidget);
        lgnpass->setObjectName("lgnpass");
        lgnpass->setGeometry(QRect(190, 130, 113, 24));
        lgnpass->setEchoMode(QLineEdit::Password);
        lbluser = new QLabel(centralwidget);
        lbluser->setObjectName("lbluser");
        lbluser->setGeometry(QRect(80, 80, 81, 21));
        lblpass = new QLabel(centralwidget);
        lblpass->setObjectName("lblpass");
        lblpass->setGeometry(QRect(80, 130, 49, 16));
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(150, 200, 80, 24));
        register_2 = new QPushButton(centralwidget);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(270, 200, 80, 24));
        errorlabel = new QLabel(centralwidget);
        errorlabel->setObjectName("errorlabel");
        errorlabel->setGeometry(QRect(160, 170, 201, 16));
        errorlabel->setWordWrap(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 80, 81, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbluser->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lblpass->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        errorlabel->setText(QCoreApplication::translate("MainWindow", "Error: wrong username or password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

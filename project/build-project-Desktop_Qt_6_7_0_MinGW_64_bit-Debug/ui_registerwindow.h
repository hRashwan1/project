/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_registerwindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QRadioButton *male;
    QRadioButton *femle;
    QGroupBox *groupBox_3;
    QRadioButton *user;
    QRadioButton *admin;
    QGroupBox *groupBox_4;
    QCheckBox *action;
    QCheckBox *comedy;
    QCheckBox *horror;
    QCheckBox *drama;
    QCheckBox *romance;
    QCheckBox *other;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName("registerwindow");
        registerwindow->resize(547, 491);
        label = new QLabel(registerwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 71, 16));
        label_2 = new QLabel(registerwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 49, 16));
        lineEdit = new QLineEdit(registerwindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 40, 211, 24));
        lineEdit_2 = new QLineEdit(registerwindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 80, 211, 24));
        lineEdit_3 = new QLineEdit(registerwindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(130, 120, 211, 24));
        label_3 = new QLabel(registerwindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 120, 71, 16));
        groupBox = new QGroupBox(registerwindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 170, 381, 71));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 40, 72, 24));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 20, 49, 16));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(110, 40, 71, 24));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(220, 40, 113, 24));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 20, 49, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(250, 20, 49, 16));
        groupBox_2 = new QGroupBox(registerwindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(40, 250, 101, 71));
        male = new QRadioButton(groupBox_2);
        male->setObjectName("male");
        male->setGeometry(QRect(0, 20, 91, 22));
        femle = new QRadioButton(groupBox_2);
        femle->setObjectName("femle");
        femle->setGeometry(QRect(0, 40, 91, 22));
        groupBox_3 = new QGroupBox(registerwindow);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(190, 250, 120, 71));
        user = new QRadioButton(groupBox_3);
        user->setObjectName("user");
        user->setGeometry(QRect(10, 20, 91, 22));
        admin = new QRadioButton(groupBox_3);
        admin->setObjectName("admin");
        admin->setGeometry(QRect(10, 40, 91, 22));
        groupBox_4 = new QGroupBox(registerwindow);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(30, 340, 331, 81));
        action = new QCheckBox(groupBox_4);
        action->setObjectName("action");
        action->setGeometry(QRect(10, 30, 78, 22));
        comedy = new QCheckBox(groupBox_4);
        comedy->setObjectName("comedy");
        comedy->setGeometry(QRect(10, 50, 78, 22));
        horror = new QCheckBox(groupBox_4);
        horror->setObjectName("horror");
        horror->setGeometry(QRect(220, 30, 78, 22));
        drama = new QCheckBox(groupBox_4);
        drama->setObjectName("drama");
        drama->setGeometry(QRect(120, 50, 78, 22));
        romance = new QCheckBox(groupBox_4);
        romance->setObjectName("romance");
        romance->setGeometry(QRect(120, 30, 78, 22));
        other = new QCheckBox(groupBox_4);
        other->setObjectName("other");
        other->setGeometry(QRect(220, 50, 78, 22));
        pushButton = new QPushButton(registerwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 440, 80, 24));
        label_7 = new QLabel(registerwindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(380, 40, 71, 16));
        label_8 = new QLabel(registerwindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 80, 71, 16));
        label_9 = new QLabel(registerwindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(420, 210, 71, 16));
        label_10 = new QLabel(registerwindow);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(190, 450, 71, 16));

        retranslateUi(registerwindow);

        QMetaObject::connectSlotsByName(registerwindow);
    } // setupUi

    void retranslateUi(QDialog *registerwindow)
    {
        registerwindow->setWindowTitle(QCoreApplication::translate("registerwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registerwindow", "username", nullptr));
        label_2->setText(QCoreApplication::translate("registerwindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("registerwindow", "re type pass", nullptr));
        groupBox->setTitle(QCoreApplication::translate("registerwindow", "Date of Birth", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("registerwindow", "jan", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("registerwindow", "Feb", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("registerwindow", "Mar", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("registerwindow", "Apr", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("registerwindow", "May", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("registerwindow", "June", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("registerwindow", "Jule", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("registerwindow", "Aug", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("registerwindow", "Sept", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("registerwindow", "Oct", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("registerwindow", "Nov", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("registerwindow", "Dece", nullptr));

        label_4->setText(QCoreApplication::translate("registerwindow", "Month", nullptr));
        label_5->setText(QCoreApplication::translate("registerwindow", "Day", nullptr));
        label_6->setText(QCoreApplication::translate("registerwindow", "Year", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("registerwindow", "Gender", nullptr));
        male->setText(QCoreApplication::translate("registerwindow", "Male", nullptr));
        femle->setText(QCoreApplication::translate("registerwindow", "Female", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("registerwindow", "Account type", nullptr));
        user->setText(QCoreApplication::translate("registerwindow", "User", nullptr));
        admin->setText(QCoreApplication::translate("registerwindow", "Admin", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("registerwindow", "Favorite Genre(s)", nullptr));
        action->setText(QCoreApplication::translate("registerwindow", "Action", nullptr));
        comedy->setText(QCoreApplication::translate("registerwindow", "Comedy", nullptr));
        horror->setText(QCoreApplication::translate("registerwindow", "Horror", nullptr));
        drama->setText(QCoreApplication::translate("registerwindow", "Drama", nullptr));
        romance->setText(QCoreApplication::translate("registerwindow", "Romance", nullptr));
        other->setText(QCoreApplication::translate("registerwindow", "Other", nullptr));
        pushButton->setText(QCoreApplication::translate("registerwindow", "Register", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H

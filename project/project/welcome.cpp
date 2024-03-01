#include "welcome.h"
#include "ui_welcome.h"
#include "users.h"

welcome::welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::welcome)
{
    ui->setupUi(this);
    QString username;
    //int age;
}

welcome::~welcome()
{
    delete ui;
}
void welcome::setname(QString lblusername){
    //int age=1;
    //QString x = QString::number(age);
    ui->hello->setText(lblusername);



}

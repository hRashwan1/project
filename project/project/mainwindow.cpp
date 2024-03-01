#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registerwindow.h"
#include"users.h"
#include"welcome.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->errorlabel->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_register_2_clicked()
{
    hide();
    registerwindow* registerw = new registerwindow(this);
    registerw->show();
}


void MainWindow::on_Login_clicked()
{

    for(int i=0;i<4;i++)
    {
        QString username=ui->lgnusername->text();
        QString password=ui->lgnpass->text();
        if ((username==usernames[i]) &&(password==passwords[i])){
            hide();
            welcome* welcomew= new welcome(this);
            welcomew->show();

           QString age1=(QString::number(ages[i]));
            QString info= username + age1;
            welcomew->setname(ui->lgnusername->text());
            welcomew->setVisible(true);
            ui->label->setText(info);
        }else ui->errorlabel->setVisible(true);


    }

}





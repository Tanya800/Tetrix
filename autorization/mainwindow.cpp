#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"player.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pass_rep->hide();
    ui->label_rep_pass->hide();
}

 int k=1;

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_go_without_clicked()
{
    hide();
    window = new SecondWindow(this);
    window->show();
}

void MainWindow::on_sign_in_clicked()
{
    int score,count;
    QString nickname= ui->nick->text();
    QString pass= ui->pass->text();
    //
    //
    //
    Player player(nickname,pass,count,score);
    hide();
    window = new SecondWindow(this);
    window->show();
}

void MainWindow::on_sign_up_clicked()
{

    if(k){
        ui->pass_rep->show();
        ui->label_rep_pass->show();
        ui->groupBox->title()= "Registration";
        ui->sign_up->setText("My account is exist already");
        k=0;
    }
    else{
        ui->pass_rep->hide();
        ui->label_rep_pass->hide();
        ui->groupBox->title()= "Registration";
        ui->sign_up->setText("Sign up");
        k=1;
    }

}


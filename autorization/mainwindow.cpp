#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"player.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Тетрис");
    ui->pass_rep->hide();
    ui->label_rep_pass->hide();
    setWindowTitle(tr("Тетрис"));
}

 int k=1;

MainWindow::~MainWindow()
{
    delete ui;
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
    window->setData(player);
    window->show();
}

void MainWindow::on_sign_up_clicked()
{

    if(k){
        ui->pass_rep->show();
        ui->label_rep_pass->show();
        ui->groupBox->setTitle( "Регистрация");
        ui->sign_up->setText("Аккаунт уже создан");
        k=0;
    }
    else{
        ui->pass_rep->hide();
        ui->label_rep_pass->hide();
        ui->groupBox->setTitle( "Авторизация");
        ui->sign_up->setText("Зарегистрироваться");
        k=1;
    }

}


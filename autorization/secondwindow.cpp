#include "secondwindow.h"
#include "ui_secondwindow.h"
#include"mainwindow.h"
#include"QTextEdit"
#include"QTime"
#include "QPushButton"
#include"QVBoxLayout"
#include "QLabel"
#include "QMessageBox"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    startButton = new QPushButton(tr("&Start"));
    startButton->setFocusPolicy(Qt::NoFocus);
    startButton->setSizePolicy(QSizePolicy::Expanding  , QSizePolicy::Expanding );
    quitButton = new QPushButton(tr("&Quit"));
    quitButton->setFocusPolicy(Qt::NoFocus);
    quitButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    userButton = new QPushButton(tr("&Account"));
    userButton->setFocusPolicy(Qt::NoFocus);
    userButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);


    connect(startButton, SIGNAL(clicked()), SLOT(slotStart()));
    connect(userButton, SIGNAL(clicked()),  SLOT(slotPlayer()));
    connect(quitButton , &QPushButton::clicked, qApp, &QCoreApplication::quit);

    //макет сетки на виджете и его размер
    setWindowTitle(tr("Tetrix"));
    resize(250, 370);

    QVBoxLayout* boxLayout = new QVBoxLayout;
    Info= new QLabel;
    boxLayout->setSpacing(10);
    boxLayout->addWidget(Info,1);
    boxLayout->addWidget(startButton,1);
    boxLayout->addWidget(userButton,1);
    boxLayout->addWidget(quitButton,1);
    setLayout(boxLayout);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{


}

void SecondWindow::setData(const Player &play){
    player = new Player(play);
    Info->setText(player->getNickname());
}

void SecondWindow::slotStart(){

}

void SecondWindow::slotPlayer(){

    QString strMessage = player->getNickname()+ '\n'+
            + "Count game: " + QString::number(player->getCountGame()) + '\n'
            + "Score: " + QString::number(player->getScore());
    QMessageBox::about(this,"Account",strMessage);

}

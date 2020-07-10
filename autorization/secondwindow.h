#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include "player.h"
#include <QDialog>
#include <QWidget>
QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();
    void setData(const Player &play);

private:
    Ui::SecondWindow *ui;
    QLabel *Info;
    QPushButton *startButton;
    QPushButton *userButton;
    QPushButton *quitButton;
    Player *player;
private slots:
    void slotStart();
    void slotPlayer();

};

#endif // SECONDWINDOW_H

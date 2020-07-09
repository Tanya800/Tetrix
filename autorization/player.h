#ifndef PLAYER_H
#define PLAYER_H
#include"QString"

class Player
{
public:
    Player();
    Player(QString,QString,int,int);
    void addCountGame();
    void addScore(int);
    QString getNickname();
    int getCountGame();
    int getScore();

private:
    QString Nickname;
    QString Password;
    int CountGame=0;
    int Score=0;

};

#endif // PLAYER_H

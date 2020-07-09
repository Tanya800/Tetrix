#include "player.h"

Player::Player()
{}

Player::Player(QString name,QString password,int count,int score ){
    Nickname=name;
    Password=password;
    CountGame=count;
    Score=score;
}

void Player::addCountGame(){
    ++CountGame;
}
void Player::addScore(int count){
    Score+=count;
}
QString Player::getNickname(){
    return Nickname;
}
int Player::getCountGame(){
    return CountGame;
}
int Player::getScore(){
    return Score;
}

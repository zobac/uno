#include "player.h"

using namespace std;

Player::Player(QString name){
    name_ = name;
    score_ = 0;
}

void Player::draw(const Card &card){
    hand_.draw(card);
}

void Player::discard(const Card &card){
    hand_.discard(card);
}

QString Player::getName() const{
    return name_;
}

int Player::getScore() const{
    return score_;
}

Hand Player::getHand() const{
    return hand_;
}


std::ostream& operator <<(std::ostream& os, const Player& p){

    std::ostringstream oss;

    oss << p.name_.toStdString() << ": ";
    oss << "score " << p.score_ << "\n\t";
    oss << p.hand_ << endl;

    return os << oss.str();
}

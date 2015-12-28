#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

#include "decks/hand.h"

class Player
{
public:
    Player();
    Player(QString name);

private:

    Hand    hand_;
    int     score_;
    QString name_;
};

#endif // PLAYER_H

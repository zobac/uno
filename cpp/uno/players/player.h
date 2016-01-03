#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

#include "decks/hand.h"

class Player
{
public:
    explicit Player(QString name);

    void    draw(const Card &card);
    void    discard(const Card &card);

    int     getScore() const;
    QString getName() const;
    Hand    getHand() const;

    friend std::ostream& operator <<(std::ostream& os, const Player& c);

private:

    Hand    hand_;
    int     score_;
    QString name_;
};

#endif // PLAYER_H

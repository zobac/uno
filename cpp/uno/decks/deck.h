#ifndef DECK_H
#define DECK_H

#include "colours.h"
#include <sstream>
#include <QString>
#include "cards/card.h"
#include <QList>

class Deck
{

public:
    explicit    Deck();
    void        shuffle();
    void        reshuffle(QList<Card> cards);
    Card        draw();
    void        stack(Card discard);
    bool        isDiscard();

    friend std::ostream& operator <<(std::ostream& os, const Deck& d);

private:
    QList<Card>     cards_;
    bool            discard_;

};

#endif // DECK_H

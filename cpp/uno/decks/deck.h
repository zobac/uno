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
    void        reshuffle(Deck deck);
    Card        draw(); // return the top card
    void        stack(Card discard); // add a card to the deck
    bool        isDiscard(); // This deck is a discard pile
    bool isEmpty() const;

    friend std::ostream& operator <<(std::ostream& os, const Deck& d);

private:
    QList<Card>     cards_;
    bool            discard_;

};

#endif // DECK_H

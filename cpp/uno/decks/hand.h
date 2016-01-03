#ifndef HAND_H
#define HAND_H

#include <QList>

#include "cards/card.h"

class Hand{

public:

    Hand();
    int             getScore() const;
    void            discard(const Card &card);
    void            draw(const Card &card);
    int             getHandSize() const;
    QList<Card>     getCards() const;

    friend std::ostream& operator <<(std::ostream& os, const Hand& h);

private:
    QList<Card>     cards_;


};

#endif // HAND_H

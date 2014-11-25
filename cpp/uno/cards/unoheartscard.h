#ifndef UNOHEARTSCARD_H
#define UNOHEARTSCARD_H

#include "card.h"

class UnoHeartsCard : public Card
{
public:
    explicit UnoHeartsCard(COLOUR colour, QString name, int drawCount, int value):Card(colour, name, drawCount, value){}
};

#endif // UNOHEARTSCARD_H

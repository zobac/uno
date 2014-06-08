#ifndef UNOCARD_H
#define UNOCARD_H

#include "card.h"

class UnoCard : public Card
{
public:
    explicit UnoCard(Colour colour, QString name, int drawCount, int value):Card(colour, name, drawCount, value){}
};

#endif // UNOCARD_H

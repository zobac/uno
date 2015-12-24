#ifndef UNOCARD_H
#define UNOCARD_H

#include "card.h"

class UnoCard : public Card
{

public:

    UnoCard(COLOUR colour, QString name, int drawCount, int value, GAMEACTION gameAction):
                Card(colour, name, drawCount, value, gameAction){}
};

#endif // UNOCARD_H

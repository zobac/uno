#ifndef UNOHEARTSCARD_H
#define UNOHEARTSCARD_H

#include "card.h"

class UnoHeartsCard : public Card
{

public:

    UnoHeartsCard(COLOUR colour, QString name, int drawCount, int value, GAMEACTION gameAction):
                Card(colour, name, drawCount, value, gameAction){}
};

#endif // UNOHEARTSCARD_H

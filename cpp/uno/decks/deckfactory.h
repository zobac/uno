#ifndef DECKFACTORY_H
#define DECKFACTORY_H

#include "unocarddeck.h"
#include "unoheartscarddeck.h"
#include "christmasaveunodeck.h"
#include "cards/unocard.h"
#include "cards/unoheartscard.h"
#include "colours.h"
#include "gameaction.h"
#include "decktypes.h"
#include "colours.h"

#include <QString>
#include <QList>

class DeckFactory
{

public:
    DeckFactory();
    Deck create(DECKTYPE type);

private:
    QList<QString> names_;
    QList<QString> blackNames_;
    QList<QString> actionCardNames_;
    QList<QString> colourNames_;
    QList<COLOUR> colours_;

};

#endif // DECKFACTORY_H

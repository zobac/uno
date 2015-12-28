#ifndef GAMECONTROL_H
#define GAMECONTROL_H

#include <QList>

#include "decks/christmasaveunodeck.h"

class GameControl{

public:
    GameControl();

private:

    QList<Player> players_;
    ChristmasAveUnoDeck drawPile_;
    ChristmasAveUnoDeck discardPile_;
    Player currentPlayer_;


};

#endif // GAMECONTROL_H

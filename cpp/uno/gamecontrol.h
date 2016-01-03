#ifndef GAMECONTROL_H
#define GAMECONTROL_H

#include <QList>

#include "decks/christmasaveunodeck.h"
#include "gameOrder.h"
#include "players/player.h"

class GameControl{

public:
    GameControl();
    void    deal();
    void    executeGameAction(GAMEACTION action);
    int     play();


private:

    QList<Player>       players_;
    ChristmasAveUnoDeck drawPile_;
    ChristmasAveUnoDeck discardPile_;
    Player              currentPlayer_;
    GAMEORDER           order;



};

#endif // GAMECONTROL_H

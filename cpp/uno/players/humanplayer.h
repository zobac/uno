#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

# include "player.h"

class humanPlayer : public Player
{
public:
    explicit humanPlayer(QString name):Player(name){}
};

#endif // HUMANPLAYER_H

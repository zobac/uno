#ifndef VIRTUALPLAYER_H
#define VIRTUALPLAYER_H

#include "player.h"
class VirtualPlayer : public Player
{
public:
    explicit VirtualPlayer(QString name):Player(name){}
};

#endif // VIRTUALPLAYER_H

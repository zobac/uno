#ifndef CARD_H
#define CARD_H

#include "colours.h"
#include "gameaction.h"
#include <sstream>
#include <QString>


class Card
{

public:

    explicit Card(COLOUR colour, QString name, int drawCount, int value, GAMEACTION gameAction): colour_(colour), name_(name),
                drawCount_(drawCount), value_(value), gameAction_(gameAction){}
    virtual ~Card(){}
    COLOUR getColour() const;
    QString getName() const;
    int getDrawCount() const;
    int getValue() const;
    int getGameAction() const;

    friend std::ostream& operator <<(std::ostream& os, const Card& c);

private:

    COLOUR  colour_;
    QString name_;
    int     drawCount_;
    int     value_;
    GAMEACTION gameAction_;
};

#endif // CARD_H

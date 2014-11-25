#ifndef CARD_H
#define CARD_H

#include "colours.h"
#include <sstream>
#include <QString>


class Card
{

protected:
    COLOUR  colour_;
    QString name_;
    int     drawCount_;
    int     value_;

public:
    explicit Card(COLOUR, QString, int, int);
    virtual ~Card(){}
    COLOUR getColour() const;
    QString getName() const;
    int getDrawCount() const;
    int getValue() const;
    virtual QString toString() const;
    friend std::ostream& operator <<(std::ostream& os, const Card& c);

};

#endif // CARD_H

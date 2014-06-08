#ifndef CARD_H
#define CARD_H

#include "colours.h"
#include <iostream>
#include <QString>

class Card
{

    protected:
        Colour  colour_;
        QString name_;
        int     drawCount_;
        int     value_;

    public:
        explicit Card(Colour colour, QString name, int drawCount, int value);
        virtual ~Card(){}
        Colour getColour() const;
        QString getName() const;
        int getDrawCount() const;
        int getValue() const;
        void print(std::ostream& os) const;
        virtual std::string toString() const = 0;

};

#endif // CARD_H

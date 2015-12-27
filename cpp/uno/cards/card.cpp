#include "card.h"

COLOUR Card::getColour() const
{
    return colour_;
}

QString Card::getName() const
{
    return name_;
}

int Card::getDrawCount() const
{
    return drawCount_;
}

int Card::getValue() const
{
    return value_;
}

int Card::getGameAction() const
{
    return gameAction_;
}

std::ostream& operator <<(std::ostream& os, const Card& c)
{
    std::ostringstream oss;

    oss << c.name_.toStdString() << ":\n\t";
    oss << "draw: " << c.drawCount_ << ",\n\t";
    oss <<  "points: " << c.value_ << ",\n\t";
    oss << "gameAction: " << c.gameAction_;
    return os << oss.str();
}


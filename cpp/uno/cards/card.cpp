#include "card.h"

Card::Card(Colour colour, QString name, int drawCount, int value):colour_(colour), name_(name), drawCount_(drawCount), value_(value)
{

}

Colour Card::getColour()
{
    return colour_;
}

QString Card::getName()
{
    return name_;
}

int Card::getDrawCount()
{
    return drawCount_;
}

int Card::getValue()
{
    return value_;
}

void Card::print(std::ostream &os) const
{
    os << "name:\t\t" << name_ << std::endl;
    os << "colour\t\t" << colour_ << std::endl;
    os << "drawCount\t\t" << drawCount_ << std::endl;
    os << "point value\t\t" << value_ << std::endl;
}

std::string Card::toString() const
{
    std::ostringstream ostr;

    ostr << colour_ << " ";
    ostr << name_ << " ";
    ostr << drawCount_ << " ";
    ostr << value_ << " ";

    return ostr.str();
}

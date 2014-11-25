#include "card.h"


Card::Card(COLOUR colour, QString name, int drawCount, int value):colour_(colour), name_(name), drawCount_(drawCount), value_(value)
{

}

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

QString Card::toString() const
{
    std::ostringstream oss;

    oss << colour_ << " ";
    oss << name_.toStdString() << " ";
    oss << drawCount_ << " ";
    oss << value_ << " ";

    return QString::fromStdString(oss.str());
}

std::ostream& operator <<(std::ostream& os, const Card& c)
{
    std::ostringstream oss;

    oss << c.colour_ << " ";
    oss << c.name_.toStdString() << " ";
    oss << c.drawCount_ << " ";
    oss << c.value_ << " ";
    return os << oss.str();
}

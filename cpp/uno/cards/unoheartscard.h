#ifndef UNOHEARTSCARD_H
#define UNOHEARTSCARD_H

class UnoHeartsCard : public Card
{
public:
    explicit UnoHeartsCard(Colour colour, QString name, int drawCount, int value):Card(colour, name, drawCount, value){}
};

#endif // UNOHEARTSCARD_H

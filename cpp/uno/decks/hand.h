#ifndef HAND_H
#define HAND_H

#include <QList>
class Hand{

public:
    Hand();
    int     getScore();
    int     setScore();
    Card    discard(int index);
    void    Draw(Card card);

private:
    Qlist<Card> cards_;
    int         score_;

};

#endif // HAND_H

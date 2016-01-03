
#include "hand.h"

using namespace std;

Hand::Hand(){
}

int Hand::getScore() const{
    int score = 0;
    QListIterator<Card> iter(cards_);

    while(iter.hasNext())
    {
        score +=  iter.next().getValue();
    }
    return score;
}

void Hand::discard(const Card &card){
    cards_.removeOne(card);
}

void Hand::draw(const Card &card){
    cards_.append(card);
}

int Hand::getHandSize() const{
    return cards_.count();
}

QList<Card> Hand::getCards() const{
    return cards_;
}

std::ostream& operator <<(std::ostream& os, const Hand& h)
{
    QListIterator<Card> iter(h.cards_);
    std::ostringstream oss;

    while(iter.hasNext())
    {
        oss << iter.next() << endl;
    }

    oss << "score: " << h.getScore();

    return os << oss.str();
}

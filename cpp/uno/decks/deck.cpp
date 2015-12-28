#include "deck.h"

using namespace std;

Deck::Deck()
{
}

void Deck::shuffle(){

    std::srand(time(0));
    std::random_shuffle(cards_.begin(), cards_.end());
}

void Deck::reshuffle(Deck deck){

    while(!deck.isEmpty())
    {
        this->stack(deck.draw());
    }
    this->shuffle();
}

Card Deck::draw(){

    return cards_.takeLast();
}

void Deck::stack(Card discard){

    cards_.append(discard);
}

bool Deck::isDiscard()
{
    return discard_;
}

bool Deck::isEmpty() const
{
    return cards_.isEmpty();
}


std::ostream& operator <<(std::ostream& os, const Deck& d)
{
    QListIterator<Card> iter(d.cards_);
    std::ostringstream oss;

    while(iter.hasNext())
    {
        oss << iter.next() << endl;
    }
    return os << oss.str();
}

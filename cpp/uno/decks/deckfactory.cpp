
#include "deckfactory.h"

DeckFactory::DeckFactory(){

    names_ << "Zero" << "One" << "Two" << "Three" << "Four" << "Five" << "Six" << "Seven" << "Eight" << "Nine" << "Ten" << "Eleven"
           << "Twelve" << "Thirteen" << "Fourteen" << "Fifteen" << "Sixteen" << "Seventeen" << "Eighteen" << "Nineteen" << "Twenty"
           << "Twenty-One" << "Twenty-Two" << "Twenty-Three";

    blackNames_ << "Wild" << "Wild Draw One" << "Wild Draw Two" << "Wild Draw Three" << "Wild Draw Four" << "Wild Draw Five"
                << "Wild Draw Six" << "Wild Draw Seven" << "Wild Draw Eight" << "Wild Draw Nine" << "Wild Draw Ten";

    actionCardNames_ << "Draw Two" << "Skip" << "Reverse";

    colourNames_ << "Blue" << "Red" << "Yellow" << "Green" << "Purple";

    colours_ << BLUE << RED << YELLOW << GREEN << PURPLE;

}


Deck DeckFactory::create(DECKTYPE type){

    Deck d;

    switch(type){

    case UNO:
        d = UnoCardDeck();

        for(int j=0; j<4; j++){ // two of each colour blue, red, yellow, green

            for(int i=0; i<10; i++){ // create numbered cards
                d.stack(UnoCard(colours_[j], names_[i], 0, i, NONE));
                d.stack(UnoCard(colours_[j], names_[i], 0, i, NONE));
            }

            for(int i=0; i<3; i++){ // create game action cards

                switch(i){
                case 0:
                    d.stack(UnoCard(colours_[j], actionCardNames_[i], 2, 20, NONE));
                    d.stack(UnoCard(colours_[j], actionCardNames_[i], 2, 20, NONE));
                    break;

                case 1:
                    d.stack(UnoCard(colours_[j], actionCardNames_[i], 0, 20, SKIP));
                    d.stack(UnoCard(colours_[j], actionCardNames_[i], 0, 20, SKIP));
                    break;

                case 2:
                    d.stack(UnoCard(colours_[j], actionCardNames_[i], 0, 20, REVERSE));
                    d.stack(UnoCard(colours_[j], actionCardNames_[i], 0, 20, REVERSE));
                    break;

                default:
                    break;
                }
            }
        }

        for(int i=0; i<4; i++) // create wilds
        {
            d.stack(UnoCard(BLACK, blackNames_[0], 0, 50, CHOOSE));
            d.stack(UnoCard(BLACK, blackNames_[4], 4, 50, CHOOSE));
        }
        break;

    case UNOHEARTS:
        d = UnoHeartsCardDeck();

        for(int i=0; i<24; i++){ // create numbered cards

            for(int j=1; j<5; j++){ // two of each colour red, yellow, green, purple

                switch(i){ // add game actions to green and purple 8s and yellow 13

                case 8: // green and purple 8s have PASS game action
                    switch(j){

                    case 3:
                        d.stack(UnoCard(colours_[j], names_[i], 0, i, PASS));
                        break;

                    case 4:
                        d.stack(UnoCard(colours_[j], names_[i], 0, i, PASS));
                        break;

                    default:
                        d.stack(UnoCard(colours_[j], names_[i], 0, i, NONE));
                        break;
                    }
                    break;

                case 13: // yellow 13 has ditch action
                    switch(j){

                    case 2:
                        d.stack(UnoCard(colours_[j], names_[i], 0, i, DITCH));
                        break;

                    default:
                        d.stack(UnoCard(colours_[j], names_[i], 0, i, NONE));
                        break;
                    }
                    break;

                default:
                    d.stack(UnoCard(colours_[j], names_[i], 0, i, NONE));
                    break;
                }
            }
        }

        for(int i=1; i<11; i++){ // create wilds
            d.stack(UnoCard(BLACK, blackNames_[i], i, 50, CHOOSE));
        }
        break;

    case CHRISTMASAVE:
        d = ChristmasAveUnoDeck();
        d.reshuffle(create(UNO));
        d.reshuffle(create(UNOHEARTS));
        d.shuffle();
        break;

    default:

        break;

    }

    return d;
}

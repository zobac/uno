import java.util.Stack;
import java.util.ArrayList;
import java.util.Iterator;

class DoomUnoDeck
{
    private UnoCardDeck         unoCards = new UnoCardDeck();
    private UnoHeartsCardDeck   unoHeartsCards = new UnoHeartsCardDeck();
    ArrayList< Card >           deck = new ArrayList< Card >();
	Iterator< Card >			unoIter = unoCards.deck.iterator();
	Iterator< Card >			unoHeartsIter = unoHeartsCards.deck.iterator();
    
    DoomUnoDeck()
    {
        makeCards();
    }
	
	private void makeCards()
	{
		while ( unoIter.hasNext() )
			deck.add( unoIter.next() );
		while ( unoHeartsIter.hasNext() )
			deck.add( unoHeartsIter.next() );
	}
}

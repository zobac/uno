import java.util.Iterator;
class DeckTest

{
	public static void main( String[] args )
	{
		UnoCardDeck 		uno = new UnoCardDeck();
		UnoHeartsCardDeck 	hearts = new UnoHeartsCardDeck();
		DoomUnoDeck 		doom = new DoomUnoDeck();
		Iterator< Card > 	unoIt = uno.deck.iterator();
		Iterator< Card >	heartsIt = hearts.deck.iterator();
		Iterator< Card >    doomIt = doom.deck.iterator();
		
		/*		
		System.out.println( "Deck size: " + uno.deck.size() );
		while ( unoIt.hasNext() )
		{
			System.out.println( unoIt.next() );
		}
		
		
		
		System.out.println( "Deck size: " + hearts.deck.size() );
		while ( heartsIt.hasNext() )
		{
			System.out.println( heartsIt.next() );
		}
		*/
		
		System.out.println( "Deck size: " + doom.deck.size() );
		while ( doomIt.hasNext() )
			System.out.println( doomIt.next() );
		
	}
}
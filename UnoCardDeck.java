import java.util.ArrayList;
import javax.swing.ImageIcon;

class UnoCardDeck
{
    private String[] 			names = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Reverse","Skip", "DrawTwo" };
    private String[] 			blackNames = { "Wild", "WildDrawFour" };
	private String[] 			colours = { "red", "yellow", "green", "blue" };
	private static String 		path = "images/unoCards/";
	private static final int 	colourCardCount = 2;
	private static final int 	blackCardCount = 4;
	
    ArrayList< Card > deck = new ArrayList<Card>();
    
    UnoCardDeck()
    {
        makeCards();
    }
    
    private void makeCards() 
    {
        for( int i = 0; i < names.length; i++ )
			for( int j  = 0; j < colours.length; j++ )
				for( int k = 0; k < colourCardCount; k++ )
					deck.add( new UnoCard( names[i], colours[j], i ) );
			
		for( int i = 0; i < blackNames.length; i++ )
			for( int j = 0; j < blackCardCount; j++ )
			{
				deck.add( new UnoCard( blackNames[i], "black", 50 ) );
				deck.add( new UnoCard( blackNames[i], "black", 50 ) );
			}
    }
    
    
    
    
}

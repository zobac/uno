import java.util.ArrayList;
import javax.swing.ImageIcon;

class UnoHeartsCardDeck
{
    private String[] names = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten","Eleven", "Twelve",
								"Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty", "Twentyne",
								"TwentyTwo", "TwentyThree" };
    private String[] blackNames = { "WildDrawOne", "WildDrawTwo", "WildDrawThree" , "WildDrawFour", "WildDrawFive", "WildDrawSix",
									"WildDrawSeven", "WildDrawEight", "WildDrawNine", "WildDrawTen" };
    
    private String[] colours = { "red", "yellow", "green", "purple" };
	
	ArrayList< Card > deck = new ArrayList< Card >();
    
	UnoHeartsCardDeck()
	{
        makeCards();    
	}

	private void makeCards()
	{
		for( int i = 0; i < names.length; i++ )
			for( int j  = 0; j < colours.length; j++ )
				deck.add( new UnoHeartsCard( names[i], colours[j], i, 0 ) );
			
		for( int i = 0; i < blackNames.length; i++ )
			deck.add( new UnoHeartsCard( blackNames[i], "black", 50, i + 1 ) );
	
	}
    
}

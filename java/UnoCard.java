import javax.swing.ImageIcon;

class UnoCard extends Card
{
    private static int  WDFOUR = 4;
    private static int  DRAWTWO = 2;
	private static ImageIcon back = new ImageIcon( "images/unoCards/unoCardBack.png" );
    
    
    public UnoCard( String name, String colour, int pointValue )
    {
        super( name, colour, pointValue );
        
        if ( this.getName() == "WildDrawFour" )
            super.setDrawCount( WDFOUR );
        
        else if ( this.getName() == "DrawTwo" )
        {
            super.setDrawCount( DRAWTWO );
            super.setPointValue( 20 );
        }
        
        else
            super.setDrawCount ( 0 );
            
        if ( this.getName() == "Skip" || this.getName() == "Reverse" )
            super.setPointValue( 20 );
		
		super.setBackImage(  back );
		
    }
}

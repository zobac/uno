import javax.swing.ImageIcon;


class UnoHeartsCard extends Card
{
    
	private static ImageIcon back = new ImageIcon( "images/unoHeartsCards/unoHeartsBack.png" );
	
	public UnoHeartsCard( String name, String colour, int pointValue, int drawCount )
    {
        super( name, colour, pointValue );
        super.setDrawCount( drawCount );
		super.setBackImage( back );
    }
}

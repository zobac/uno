import javax.swing.ImageIcon;

interface CardInterface
{
    public String getName();
    public String setName( String name );
    public int getPointValue();
    public int setPointValue( int pointValue );
    public String getColour();
    public String setColour( String colour );
    public int getDrawCount();
    public int setDrawCount( int drawCount );
	public ImageIcon getFaceImage();
	public ImageIcon setFaceImage( ImageIcon face );
	public ImageIcon getBackImage();
	public ImageIcon setBackImage( ImageIcon Back );
	public String toString();
}

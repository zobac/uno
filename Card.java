import javax.swing.ImageIcon;

abstract class Card implements CardInterface
{
    private int         pointValue_;
    private int         drawCount_;
    private String      name_;
    private String      colour_;
	private ImageIcon	backImage_;
	private ImageIcon   faceImage_;
    
    
    public Card( String name, String colour, int pointValue )
    {
        name_ = name;
        colour_ = colour;
        pointValue_ = pointValue;
	}
    
    public int getPointValue()
    {
        return pointValue_;
    }
    
    public int setPointValue( int pointValue )
    {
        pointValue_ = pointValue;
        return pointValue_;
    }
    
    public String getName()
    {
        return name_;
    }
    
    public String setName( String name )
    {
        name_ = name;
        return name_;
    }
    
    public String getColour()
    {
        return colour_;
    }
    
    public String setColour( String colour )
    {
        colour_ = colour;
        return colour_;
    }
    
    public int getDrawCount()
    {
        return drawCount_;
    }
    
    public int setDrawCount( int drawCount )
    {
        drawCount_ = drawCount;
        return drawCount_;
    }
	
	public ImageIcon getFaceImage()
	{
		return faceImage_;
	}
	
	public ImageIcon setFaceImage( ImageIcon face )
	{
		faceImage_ = face;
		return faceImage_;
	}
	
	public ImageIcon getBackImage()
	{
		return backImage_;
	}
	
	public ImageIcon setBackImage( ImageIcon back )
	{
		backImage_ = back;
		return backImage_;
	}
	
	public String toString()
	{
		String string = colour_ + name_ + " " + pointValue_ + " " + drawCount_;
		return string;
	}
}

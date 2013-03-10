import java.util.HashSet;


abstract class Player implements PlayerInterface
{
    private int score_;
    private String name_;
    private HashSet<  Card > hand_;
    private int handValue_;
    
    public Player( String name )
    {
        name_= name;
        score_ = 0;
    }
    
    public int getScore()
    {
        return score_;
    }
    
    public int setScore(int score)
    {
        score_ = score;
        return score_;
    }
    
    public int addToScore( int add )
    {
        score_ += add;
        return score_;
    }
    
    
    public String getName()
    {
        return name_;
    }
    
    public Card draw( Card top )
    {
        hand_.add( top );
        return top;
    }
    
    public Card discard( Card choice )
    {
        hand_.remove( choice );
        return choice;
    }
    
    public int getHandValue()
    {
        return handValue_;
    }
    
    public int setHandValue(int handValue)
    {
        handValue_ = handValue;
        return handValue_;
    }
    
    public void SetHandValue( int value )
    {
        handValue_ = value;
    }
}

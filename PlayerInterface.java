


interface PlayerInterface
{
    public int getScore();
    public int setScore(int score);
    public int addToScore( int add );
    public String getName();
    public Card discard( Card choice );
    public Card draw( Card top );
    public int getHandValue();
    public int setHandValue(int handValue);
    public void SetHandValue( int value );
}

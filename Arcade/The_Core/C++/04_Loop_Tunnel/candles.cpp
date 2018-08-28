int candles(int candlesNumber, int makeNew) 
{
    int leftovers = 0, total = 0;
    while(candlesNumber)
    {
        total += candlesNumber;
        leftovers += candlesNumber;
        candlesNumber = leftovers / makeNew;
        leftovers = leftovers % makeNew;
    }
    
    return total;
}


int rounders(int n) 
{
    int count  = 0, multiplier = 1;   
    while(n > 9)
    {
         if((n + count) % 10 >= 5)
            count = 1;    
        else
            count  = 0;
        multiplier *= 10; n /= 10;
    }

    return ((n + count) * multiplier);
}


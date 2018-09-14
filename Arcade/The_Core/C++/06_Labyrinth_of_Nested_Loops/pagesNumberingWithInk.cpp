int pagesNumberingWithInk(int current, int numberOfDigits) 
{
    int digits = 1;
    while(numberOfDigits >= digits)
    {
        if(current > 9)
            digits = 2;
        if(current > 99)
            digits = 3;
        if(current > 999)
            digits = 4;
        
        numberOfDigits -= digits;
        current++;
        
    }
    
    return current-1;
}


int leastFactorial(int n) 
{
    int m = 1, fact = 1;
    while(n > m)
        m *= fact++;
    
    return m;
}


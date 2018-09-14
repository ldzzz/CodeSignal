bool isPower(int n) 
{
    if(n == 1)
        return true;
    for(int i = 1; i < n; i++)
    {
        int num = log(n) / log(i);
        if(pow(i, num) == n)
            return true;
    }
    
    return false;
}


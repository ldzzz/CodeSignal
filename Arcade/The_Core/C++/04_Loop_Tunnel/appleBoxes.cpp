int appleBoxes(int k) 
{
    int red = 0, yellow = 0, i = 0;
    while(++i <= k)
    {
        if(i % 2)
            yellow += (i * i);
        else
            red += (i * i);
    }
    
    return (red - yellow);
}


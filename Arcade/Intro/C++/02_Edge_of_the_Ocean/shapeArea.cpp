int shapeArea(int n) 
{
    int total = 1;
    for(int i = 1; i < n; i++)
        total += i * 4;
    
    return total;
}
 

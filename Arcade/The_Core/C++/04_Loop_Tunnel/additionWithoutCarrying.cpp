int additionWithoutCarrying(int param1, int param2) 
{
    int res = 0, multiplier = 1;
    while(param1 || param2)
    {
        res += (((param1 % 10) + (param2 % 10)) % 10) * multiplier;
        param1 /= 10; param2 /= 10; multiplier *= 10;
    }
    
    return res;
}


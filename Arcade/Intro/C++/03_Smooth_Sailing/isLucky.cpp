bool isLucky(int n) 
{
    #define ASCII 48; // 48 is decimal value for zero(0) in ASCII, substract to get valid num
    string num = to_string(n);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < num.length(); i++)
    {
        if(i < num.length() / 2)
        {
            sum1 += num.at(i) - ASCII;
        }
        else
            sum2 += num.at(i) - ASCII;
    }
    return sum1 == sum2;
}
 

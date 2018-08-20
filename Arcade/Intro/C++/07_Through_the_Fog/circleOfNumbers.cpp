int circleOfNumbers(int n, int firstNumber) 
{
    int ret = (n/2) + firstNumber;
    if((n - ret) <= 0)
        return (ret - n);
    return (ret);
}
 

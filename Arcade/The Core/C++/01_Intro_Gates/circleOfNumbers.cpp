
int circleOfNumbers(int n, int firstNumber) 
{
    return ((n - (n / 2) - firstNumber < 1)?((n / 2) + firstNumber - n):((n / 2) + firstNumber));
}
 

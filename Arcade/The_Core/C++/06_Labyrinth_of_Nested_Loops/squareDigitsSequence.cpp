int squareDigitSum(int elem)
{
    int sum = 0;
    while(elem)
    {
        sum += pow(elem % 10 ,2);
        elem /= 10;
    }
    
    return sum;
}
int squareDigitsSequence(int a0) 
{
    std::map<int,int> squaredDigits;
    int temp = squareDigitSum(a0);
    squaredDigits[a0] = temp;
    while(squaredDigits.find(temp) == squaredDigits.end())
    {
        squaredDigits[temp] = squareDigitSum(temp);
        temp = squareDigitSum(temp);
    }
    
    return squaredDigits.size()+1;
}


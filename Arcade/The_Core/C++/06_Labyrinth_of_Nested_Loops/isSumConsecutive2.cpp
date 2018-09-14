int isSumOfConsecutive2(int n) 
{
    int ret = 0;
    for(int i = 3; i <= n; i+=2) //smallest odd number that is sum of two consecutive is 3->start, we check only odd ones
        if(n % i == 0)          //taking into consideration, that every odd number can be expressed as two consecutive numbers
            ret++;              //we check how many odd numbers are dividing our odd number, that many times we can express that number as sum of consecutive
    
    return ret;
}


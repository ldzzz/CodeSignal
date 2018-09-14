int digitSum(int num)
{
    return ((num)?(digitSum(num/10) + num % 10):(0));
}

int comfortableNumbers(int l, int r) 
{
    
    int pairs = 0;
    for(int a = l; a <= r; a++)
        for(int b = a + 1; b <= r; b++)
            if((b >= a - digitSum(a)) && (b <= a + digitSum(a)))
                if((a >= b - digitSum(b)) && (a <= b + digitSum(b)))
                    pairs++;
    
    return pairs;
}


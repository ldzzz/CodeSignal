int phoneCall(int min1, int min2_10, int min11, int s) 
{
    return ((s < min1)?(0):( (min1 + 9 * min2_10 > s)?(1 + (s - min1) / min2_10):(10 + (s - min1 - 9 * min2_10) / min11)));
}

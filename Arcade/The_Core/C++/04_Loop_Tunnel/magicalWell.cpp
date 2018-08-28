int magicalWell(int a, int b, int n) 
{   
    return (n == 0)?(0):((a*b) + magicalWell(++a, ++b, --n));
}


int equalPairOfBits(int n, int m) 
{
  return pow(2, ffs((n & m) | (~n & ~m)) - 1) ;
}




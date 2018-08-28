int differentRightmostBit(int n, int m) 
{
  return pow(2, ffs(n ^ m)-1) ;
}


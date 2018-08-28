int rangeBitCount(int a, int b) 
{
    int ret = 0;
    for(; a <= b; a++)
    {
        std::bitset<8>r(a);
        ret += r.count();
    }
    
    return ret;
}


int differentSymbolsNaive(std::string s) 
{
    sort(s.begin(), s.end());
    int i = s.length(), ret = 0;
    while(i-- > -1)
        if(s[i-1] != s[i])
            ret++;
    
    return ret;
}

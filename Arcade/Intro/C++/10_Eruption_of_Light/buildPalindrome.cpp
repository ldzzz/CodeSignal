bool checkPalindrome(std::string inputString) 
{
    for(int i = 0; i < inputString.length() / 2; i++)
        if(inputString.at(i) != inputString.at(inputString.length() - 1 - i))
            return false;
    
    return true;
}

std::string buildPalindrome(std::string st) 
{
    std::string rev = st;
    reverse(rev.begin(), rev.end());
    if(st == rev)
        return st;
    
    int offset = 0;
    while(!checkPalindrome(st))
    {
        st.insert(st.end()- offset, rev[rev.length() - 1 - offset]);
        offset++;
    }
    return st;
}
 

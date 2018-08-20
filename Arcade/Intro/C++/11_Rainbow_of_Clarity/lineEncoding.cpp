std::string lineEncoding(std::string s) 
{
    std::string ret = "";
    int charCount = 1;
    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i-1])
            charCount++;
        else
        {
            if(charCount < 2)
                ret += s[i-1];
            else
                ret += to_string(charCount) + s[i-1];
            charCount = 1;
        }
    }
    if(charCount < 2)
        ret += s[s.length()-1];
    else
        ret += to_string(charCount) + s[s.length()-1];
    
    return ret;
}
 

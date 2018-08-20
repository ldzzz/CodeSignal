std::string reverseString(std::string s)
{
    for(int i  = 0; i < s.length() / 2; i++)
    {
        char temp = s.at(i);
        s.at(i) = s.at(s.length()-1-i);
        s.at(s.length()-1-i) = temp;
    }
    return s;
}

std::string reverseParentheses(std::string s) 
{
    int begin = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '(')
            begin = i;
        else if(s.at(i) == ')')
        {
            std::string temp = reverseString(s.substr(begin + 1, i - begin - 1));
            return reverseParentheses(s.substr(0, begin) + temp + s.substr(i+1));
        }
    }
    return s;
}
 

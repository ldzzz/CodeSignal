int commonCharacterCount(std::string s1, std::string s2) 
{
    int common = 0;
    for(int i = 0; i < s1.length(); i++)
    {
        for(int j = 0; j < s2.length(); j++)
        {
            if(s1.at(i) == s2.at(j))
            {
                common++;
                s2.erase(s2.begin() + j);
                break;
            }
        }
    }
    return common;
}
 

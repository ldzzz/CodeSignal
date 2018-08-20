bool isIPv4Address(std::string inputString) 
{
    int dots = 0;
    for(int i = 0; i < inputString.length(); i++)
        if(inputString.at(i) == '.')
            dots++;
    if(dots != 3)
        return false;
    for(int i = 0; i < inputString.length(); i++)
    {
        string temp;
        while(i < inputString.length() && inputString.at(i) != '.')
        {
            if(!isdigit(inputString.at(i)))
                return false;
            temp += inputString.at(i);
            i++;
        }
        if(temp.empty() || temp.length() > 3 || 
           stoi(temp) < 0 || stoi(temp) > 255)
            return false;
    }
    return true;
}
 

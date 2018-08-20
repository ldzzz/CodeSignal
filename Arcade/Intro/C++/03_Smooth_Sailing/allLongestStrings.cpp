std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) 
{
    int len = 0;
    vector<string> ret;
    for(int i = 0; i < inputArray.size(); i++)
    {
        if(inputArray.at(i).length() > len)
        {
            ret.clear();
            len = inputArray.at(i).length();
            ret.push_back(inputArray.at(i));
        }
        else if(inputArray.at(i).length() == len)
            ret.push_back(inputArray.at(i));
    }
    
    return ret;
}
 

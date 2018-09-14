bool isCaseInsensitivePalindrome(std::string inputString) 
{
    std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);   
    for(int i = 0; i < inputString.length() / 2; i++)
        if(inputString.at(i) != inputString.at(inputString.length() - 1 - i))
            return false;
    
    return true;
}

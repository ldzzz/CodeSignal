bool isBeautifulString(std::string inputString) 
{
    int i = 0, letters[26] = {0};
    while(i < inputString.length())
        letters[inputString[i++] - 'a']++;
    
    i = 1;
    while(i < 26)
        if(letters[i-1] < letters[i++])
            return false;
    
    return true;
}
 

std::string longestDigitsPrefix(std::string inputString) 
{
    string longest = "";
    int i = 0;
    while(isdigit(inputString[i]))
      longest += inputString[i++];   
    
    return longest;
}
 

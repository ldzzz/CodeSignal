bool palindromeRearranging(std::string inputString) 
{
    #define OFFSET 97
    int occurrences[31] = {0};
    for(int i = 0; i < inputString.length(); i++)
        occurrences[inputString[i] - OFFSET]++;
    
    int odd = 0;
    for(int i = 0; i < 31; i++)
    {
        if(odd > 1)
            return false;
        
        if(occurrences[i] % 2)
            odd++;
    }
    return true;
}
 

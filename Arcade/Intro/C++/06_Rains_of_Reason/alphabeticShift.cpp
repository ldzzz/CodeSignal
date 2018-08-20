std::string alphabeticShift(std::string inputString) 
{
    for(int i = 0; i < inputString.length(); i++)
    {
        if(inputString.at(i) == 'z')
            inputString.at(i) = 'a';
        else
            inputString.at(i)++;
    }
    return inputString;
}
 

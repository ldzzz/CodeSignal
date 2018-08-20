int arrayChange(std::vector<int> inputArray) 
{
    int moves = 0;
    
    for(int i = 1; i < inputArray.size(); i++)
    {
        while(inputArray.at(i-1) >= inputArray.at(i))
        {
            moves++;
            inputArray.at(i)++;
        }
    }
    
    return moves;
}
 

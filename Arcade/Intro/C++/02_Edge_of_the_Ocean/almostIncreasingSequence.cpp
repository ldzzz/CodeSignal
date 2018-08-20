bool almostIncreasingSequence(std::vector<int> sequence) 
{
    int total = 0, index = 0;
    for(int i = 1; i < sequence.size(); i++)
        if(sequence.at(i) <= sequence.at(i-1))
        {
            total++;
            index = i;
        }
    
    if(total > 1)
        return false;
    
    if(total == 0 || index == sequence.size() - 1 || index == 1 ||
       sequence.at(index - 1) < sequence.at(index + 1) || 
       sequence.at(index - 2) < sequence.at(index))
        return true;

    return false;
}
 

int makeArrayConsecutive2(std::vector<int> statues) 
{
    int diff, total = 0;
    std::sort(statues.begin(), statues.end());
    
    for(int i = 0; i < statues.size() - 1; i++)
        if((diff = statues.at(i+1) - statues.at(i)) != 1)
            total += diff - 1;
        
    return total;
}
 

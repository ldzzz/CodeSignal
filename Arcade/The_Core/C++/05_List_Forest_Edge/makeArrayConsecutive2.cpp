int makeArrayConsecutive2(std::vector<int> statues) 
{
    std::sort(statues.begin(), statues.end());
    int count = 0;
    for(int i = 1; i < statues.size(); i++)
        if(statues[i] - statues[i-1] - 1 != 0)
            count += statues[i] - statues[i-1] - 1;
    
    return count;
}


int absoluteValuesSumMinimization(std::vector<int> a) 
{
    int x, sum, smallest_sum = INT_MAX;
    for(auto& elem: a)
    {
        sum = 0;
        for(int i = 0; i < a.size(); i++)
            sum += abs(a.at(i) - elem);
        if(sum < smallest_sum)
        {
            smallest_sum = sum;
            x = elem;
        }
    }
    return x;
}

int divisors(int num)
{
    int sum = 1, div = num;
    while(--div)
        if(num % div == 0)
            sum++;
    return sum;
}
std::vector<int> weakNumbers(int n) 
{
    vector<int> amountDivs, weakness;
    for(int i = 1; i <= n; i++)
        amountDivs.push_back(divisors(i));
    
    for(int i = 0; i < n; i++)
    {
        int total = 0;
        for(int j = 0; j < i; j++)
            if(amountDivs[i] < amountDivs[j])
                total++;
        weakness.push_back(total);
    }
    
    int max = *max_element(weakness.begin(), weakness.end());
    std::vector<int>ret = {max, std::count(weakness.begin(), weakness.end(), max)};
    return ret;
}


int deleteDigit(int n) 
{
    std::string num = to_string(n), numT = to_string(n);
    int max = 0;
    for(int i = 0; i < num.length(); i++)
    {
        numT.erase(numT.begin()+i);
        if(stoi(numT) > max)
            max = stoi(numT);
        
        numT.insert(numT.begin() + i, num[i]);
    }
    
    return max;
}
 

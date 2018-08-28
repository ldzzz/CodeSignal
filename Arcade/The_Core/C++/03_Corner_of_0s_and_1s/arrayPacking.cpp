int arrayPacking(std::vector<int> a) 
{
    for(int i = a.size() - 2; i > -1; i--)
        a[a.size()-1] = (a[a.size()-1] << 8) | a[i];
    
    return a[a.size()-1];
}


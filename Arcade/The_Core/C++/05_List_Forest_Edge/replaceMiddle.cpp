std::vector<int> replaceMiddle(std::vector<int> arr) 
{
    if(!(arr.size() % 2))
    {
        arr[(arr.size() / 2) - 1] += arr[arr.size() / 2];
        arr.erase(arr.begin() + arr.size() / 2);
    }
    
    return arr;
}


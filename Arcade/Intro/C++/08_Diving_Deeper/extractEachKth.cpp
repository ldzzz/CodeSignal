std::vector<int> extractEachKth(std::vector<int> inputArray, int k) 
{
    for(int i = inputArray.size() - 1; i > -1; i--)
        if(!((i + 1) % k))
            inputArray.erase(inputArray.begin() + i);
    
    return inputArray;
}
 

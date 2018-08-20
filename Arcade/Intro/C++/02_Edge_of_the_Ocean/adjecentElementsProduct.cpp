int adjacentElementsProduct(std::vector<int> inputArray) 
{
    int max = INT_MIN, curr;
    for(int i = 0; i < inputArray.size() - 1; i++)
        if((curr = inputArray.at(i) * inputArray.at(i+1)) > max)
            max = curr;

    return max;
}
 

int arrayMaximalAdjacentDifference(std::vector<int> inputArray) 
{
    int max = 0;
    for(int i = 1; i < inputArray.size(); i++)
    {
        int first = inputArray[i-1] - inputArray[i];
        int second = inputArray[i] - inputArray[i-1];
        max = (max > first && max > second)?(max):((first > second)?(first):(second));
    }
    return max;
}
 

int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) 
{
    int maxSum = 0, tempSum = 0;
    for(int j = 0; j < k; j++)
            maxSum += inputArray[j];
    tempSum = maxSum;
    for(int i = k; i < inputArray.size(); i++)
    {   
        tempSum += inputArray[i] - inputArray[i-k];
        if(maxSum < tempSum)
            maxSum = tempSum;
    }
    return maxSum;
}

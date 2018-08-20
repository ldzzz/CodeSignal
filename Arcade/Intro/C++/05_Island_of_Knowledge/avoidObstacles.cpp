int avoidObstacles(std::vector<int> inputArray) 
{
    sort(inputArray.begin(), inputArray.end());
    int jump = 2, i = 0;
    while(i < inputArray.size())
    {
        if(!(inputArray.at(i) % jump))
        {
            i = 0;
            jump += 1;
        }
        else
            i++;
    }
    return jump;
}

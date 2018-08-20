bool stringsRearrangement(std::vector<std::string> inputArray) 
{
    sort(inputArray.begin(), inputArray.end());
    while(std::next_permutation(inputArray.begin(), inputArray.end()))
    {
        int mismatch;
        for(int i = 1; i < inputArray.size(); i++)
        {
            mismatch = 0;
            for(int j = 0; j < inputArray[i].size(); j++)
                if(inputArray[i-1][j] != inputArray[i][j])
                    mismatch++;
            if(mismatch != 1)
                break;
        }
        if(mismatch == 1)
            return true;
    }
    return false;
}

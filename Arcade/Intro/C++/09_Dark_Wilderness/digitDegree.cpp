int digitDegree(int n) 
{
    string num = to_string(n);
    int replaceAmount = 0;
    while(num.length() > 1)
    {
        int temp = 0;
        for(int i = 0; i < num.length(); i++)
            temp += num[i] - '0'; 
        num = to_string(temp);
        replaceAmount++;
    }
    return replaceAmount;
}


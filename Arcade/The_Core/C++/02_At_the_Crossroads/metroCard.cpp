std::vector<int> metroCard(int lastNumberOfDays) 
{
    std::vector<int> ret;
    return ((lastNumberOfDays == 28 || lastNumberOfDays == 30)?(ret = {31}):(ret = {28,30,31}));
}


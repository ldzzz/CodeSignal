int depositProfit(int deposit, int rate, int threshold) 
{
    int year = 0;
    float new_deposit = (float)deposit;
    while(new_deposit < threshold)
    {
        float increase = ((float)rate / 100.f) * new_deposit;
        new_deposit += increase;
        year++;
    }
    return year;
}
 

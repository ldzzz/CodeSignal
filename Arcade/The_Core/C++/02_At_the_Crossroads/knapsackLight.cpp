int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) 
{
    return ((weight1+weight2 <= maxW)?(value1+value2):
            ((weight1 > maxW)?((weight2 > maxW)?(0):(value2)):
             ((weight2 > maxW)?(value1):((value1 > value2)?(value1):(value2)))));
}
 

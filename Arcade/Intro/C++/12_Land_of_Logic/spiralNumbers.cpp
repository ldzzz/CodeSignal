std::vector<std::vector<int>> spiralNumbers(int n) 
{
    std::vector<std::vector<int>> ret(n, std::vector<int>(n));
    int row = 0, col = -1, start = 0, end = n, val = 1;
    while(true)
    {
        while(col != end - 1)
            ret[row][++col] = val++;
        if(val > (n * n))
            break;
        while(row != end - 1)
            ret[++row][col] = val++;
        while(col != start)
            ret[row][--col] = val++;
        start++;    end--;
        while(row != start)
            ret[--row][col] = val++;
    }
    
    return ret;
}
 

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) 
{
    vector<vector<int>> ret;
    for(int i = 1; i < image.size() - 1; i++)
    {
        vector<int> temp;
        for(int j = 1; j < image[i].size() - 1; j++)
            temp.push_back(((image[i-1][j-1] + image[i-1][j] + image[i-1][j+1] + 
                             image[i][j-1]   + image[i][j]   + image[i][j+1]   + 
                             image[i+1][j-1] + image[i+1][j] + image[i+1][j+1]) / 9));
        ret.push_back(temp);
    }
    return ret;
}
 

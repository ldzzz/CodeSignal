int differentSquares(std::vector<std::vector<int>> matrix) 
{
    std::vector<std::string> subs;
    
    for(int i = 0; i < matrix.size() - 1; i++)
    {
        for(int j = 0; j < matrix[i].size() - 1; j++)
        {
            std::string temp = "";
            temp += matrix[i][j];
            temp += matrix[i][j+1];
            temp += matrix[i+1][j];
            temp += matrix[i+1][j+1];
            subs.push_back(temp);
        }
    }
    sort(subs.begin(), subs.end());
    std::vector<std::string>::iterator it;
    it = std::unique(subs.begin(), subs.end()); 
    subs.resize( std::distance(subs.begin(),it));
    return subs.size();
    
    
}
 

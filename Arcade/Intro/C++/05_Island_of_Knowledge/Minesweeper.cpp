std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) 
{
    //first increase the border for 1 around the current matrix
    vector<bool> row;
     for(int j = 0; j < matrix[0].size(); j++)
         row.push_back(false);
    
    matrix.push_back(row);
    matrix.insert(matrix.begin(), row);
    
    for(int i = 0; i < matrix.size(); i++)
    {
        matrix[i].push_back(false);
        matrix[i].insert(matrix[i].begin(), false);
    }
    
    vector<vector<int>> ret;
    
    for(int i  = 1; i < matrix.size() - 1; i++)
    {
        vector<int> temp;
        for(int j = 1; j < matrix[i].size() - 1; j++)
        {
            temp.push_back(matrix[i-1][j-1] + matrix[i-1][j] + matrix[i-1][j+1] + 
                           matrix[i][j-1]  + matrix[i][j+1]  +
                           matrix[i+1][j-1] + matrix[i+1][j] + matrix[i+1][j+1]);
        }
        ret.push_back(temp);
    }
    return ret;
}

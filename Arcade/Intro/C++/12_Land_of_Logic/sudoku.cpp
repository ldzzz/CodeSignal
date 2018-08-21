bool checkBox(std::vector<std::vector<int>> grid)
{
    std::vector<int> cube;
    for(int col = 0; col < grid.size(); col += 3)
    {
        for(int row = 0; row < grid.size(); row += 3) 
        {
            for(int i = row; i < row+3; i++)
                for(int j = col; j < col+3; j++)
                    cube.push_back(grid[i][j]);
            
            sort(cube.begin(), cube.end());
            
            for(int i = 1; i < 10; i++)
                if(cube[i-1] != i)
                    return false;
            
            cube.clear();
        }
    }
    
    return true;
}

bool checkRow(std::vector<std::vector<int>> grid)
{
    for(int row = 0; row < grid.size(); row++)
    {
        sort(grid[row].begin(), grid[row].end());
        for(int i = 1; i < 10; i++)
            if(grid[row][i-1] != i)
                return false;
    }
    return true;
}

bool checkColumn(std::vector<std::vector<int>> grid)
{
    std::vector<int> column;
    for(int col = 0; col < grid[0].size(); col++)
    {
        for(int row = 0; row < grid.size(); row++)
            column.push_back(grid[row][col]);

        sort(column.begin(), column.end());
        for(int i = 1; i < 10; i++)
            if(column[i-1] != i)
                return false;
        
        column.clear();
    }
    return true;
}

bool sudoku(std::vector<std::vector<int>> grid) 
{
    return (checkRow(grid) && checkColumn(grid) && checkBox(grid));
}

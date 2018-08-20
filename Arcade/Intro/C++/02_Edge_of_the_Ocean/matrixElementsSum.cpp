int matrixElementsSum(std::vector<std::vector<int>> matrix)
{
    for(int i = 0; i < matrix.size(); i++)
        for(int j = 0; j < matrix[0].size(); j++)
            if(matrix.at(i).at(j) == 0)
            {
                int k = i;
                while(k < matrix.size())
                {
                    matrix.at(k).at(j) = 0;
                    k++;
                }
            }
    int sum = 0;
    for(auto& elem: matrix)
        sum += std::accumulate(elem.begin(), elem.end(), 0);
    
    return sum;
}
 

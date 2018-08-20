std::vector<int> alternatingSums(std::vector<int> a) 
{
    std::vector<int> weights;
    weights.push_back(0);
    weights.push_back(0);
    for(int i = 0; i < a.size(); i++)
    {
        if(i % 2)
            weights.at(1) += a.at(i);
        else
            weights.at(0) += a.at(i);
    }
    return weights;
}
 

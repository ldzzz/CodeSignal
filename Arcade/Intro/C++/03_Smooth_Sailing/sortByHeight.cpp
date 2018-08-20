std::vector<int> sortByHeight(std::vector<int> a) 
{
    vector<int> temp;
    for(auto& elem: a)
        if(elem > -1)
            temp.push_back(elem);
    
    sort(temp.begin(), temp.end());
    for(int i = 0; i < a.size(); i++)
        if(a.at(i) != -1)
        {
            a.at(i) = temp.at(0);
            temp.erase(temp.begin());
        }
    return a;
}
 

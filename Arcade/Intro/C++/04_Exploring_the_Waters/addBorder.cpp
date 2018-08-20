std::vector<std::string> addBorder(std::vector<std::string> picture) 
{
    std::string temp;
    for(int i = 0; i < picture.at(0).length() + 2; i++)
        temp += '*';
    
    picture.insert(picture.begin(), temp);
    picture.push_back(temp);
    for(int i = 1; i < picture.size() - 1; i++)
    {
        picture.at(i).insert(picture.at(i).length(),"*");
        picture.at(i).insert(0 ,"*");
    }
    return picture;
}
 

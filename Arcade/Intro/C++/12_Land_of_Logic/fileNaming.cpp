std::vector<std::string> fileNaming(std::vector<std::string> names) 
{
    std::set<std::string> files;
    for(auto& a: names)
    {
        int k = 1;
        std::string temp = a;
        while(files.find(temp) != files.end())
            temp = a + "(" + to_string(k++) + ")";
        
        files.insert(a = temp);
    }
    
    return names;
}

bool variableName(std::string name) 
{
    if(!(isalpha((int)name.at(0)) || name.at(0) == 95))
        return false;
    
    for(int i = 1; i < name.length(); i++)
        if(!(isalnum((int)name.at(i)) || name.at(i) == 95))
            return false;
    return true;
}

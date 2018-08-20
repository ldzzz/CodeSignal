char firstDigit(std::string inputString) 
{
    for(auto& elem: inputString)
        if(isdigit(elem))
            return elem;
}
 

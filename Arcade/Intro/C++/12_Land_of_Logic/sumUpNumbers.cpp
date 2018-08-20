int sumUpNumbers(std::string inputString) 
{
    int sum  = 0;
    inputString += '!';
    std::string temp = "0";
    for(auto& elem: inputString)
    {
        if(isdigit(elem))
            temp += elem;
        else
        {
            sum += stoi(temp);            
            temp = "0";
        }
    }
    
    return sum;
}
 

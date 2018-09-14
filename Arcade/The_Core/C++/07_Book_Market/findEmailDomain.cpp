std::string findEmailDomain(std::string address) 
{
    int i;
    for(i = address.length(); i > -1; i--)
        if(address[i] == '@')
            break;
    
    return address.substr(i+1);
}


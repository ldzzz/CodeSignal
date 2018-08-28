bool increaseNumberRoundness(int n) 
{
    std::string num = std::to_string(n);
    bool notzero = false;
    for(int i = num.length() -1; i > -1; i--)
    {
        if(notzero)
            if(num[i] == '0')
                return true;
        
        if(num[i] != '0')
            notzero = true;
    }
    
    return false;
}


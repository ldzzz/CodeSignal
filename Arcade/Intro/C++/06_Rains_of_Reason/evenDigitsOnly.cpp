bool evenDigitsOnly(int n) 
{
    string num = to_string(n);
    for(int i = 0; i < num.length(); i++)
        if(num.at(i) % 2)
            return false;
    return true;
}
 

int stringsConstruction(std::string a, std::string b) 
{
    int aa[26] = {0};
    int bb[26] = {0};
    
    for(auto el: a) aa[el - 'a']++;
    for(auto el: b) bb[el - 'a']++;
    int ret = INT_MAX;
    for(int i = 0; i < 26; i++)
        if(aa[i] != 0 && ret > (bb[i] / aa[i]))
            ret = bb[i] / aa[i];
    
    
    return ((ret == INT_MAX)?(0):(ret));
}


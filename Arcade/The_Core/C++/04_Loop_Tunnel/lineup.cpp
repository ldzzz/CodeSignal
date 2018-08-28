int lineUp(std::string commands) 
{
    int count = 0;
    bool sameSide = true;
    for(auto& a: commands)
    {
        if(a != 'A')
            sameSide = !sameSide;
        if(sameSide)
            count++;
    }
    return count;
}


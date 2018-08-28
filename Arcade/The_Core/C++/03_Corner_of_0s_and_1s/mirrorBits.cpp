int mirrorBits(int a) 
{
    std::string reverse;
    while(a)
    {
        reverse += to_string(a % 2);
        a /= 2;
    }
    return (std::stoi(reverse, nullptr, 2));
}


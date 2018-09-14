bool isTandemRepeat(std::string inputString) 
{
    int len = (inputString.length() % 2)?(inputString.length()+1):(inputString.length());
    return (inputString.substr(0, len / 2) == inputString.substr(len / 2, len / 2));
}


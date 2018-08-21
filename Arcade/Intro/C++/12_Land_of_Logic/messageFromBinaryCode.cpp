std::string messageFromBinaryCode(std::string code) 
{
    return ((code.size())?((char)std::stoi(code.substr(0, 8), nullptr, 2) + messageFromBinaryCode(code.substr(8, code.size() - 8))):(""));
}

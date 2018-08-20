bool isMAC48Address(std::string inputString) 
{
    std::regex myRegex ("([0-9A-F]{2}[\-]{1}){5}[0-9A-F]{2}");
    return (std::regex_match (inputString, myRegex));
}
 

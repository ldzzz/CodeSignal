std::string htmlEndTagByStartTag(std::string startTag) 
{
    std::string command = "</";
    for(int i = 1; i < startTag.length(); i++)
    {
        if(startTag[i] == ' ')
            break;
        command += startTag[i];
    }
    return (command.back() == '>')?(command):(command + ">");
}


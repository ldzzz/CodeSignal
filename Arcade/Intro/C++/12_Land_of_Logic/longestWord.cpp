std::string longestWord(std::string text) 
{
    string longest = "", temp = "";
    text += ' ';
    for(int i = 0; i < text.length(); i++)
    {
        if(isalpha(text[i]))
            temp += text[i];
        else
        {
            if(temp.length() > longest.length())
                longest = temp;
            temp.clear();
        }
    }
    return ((!longest.length())?(text):(longest));
}
 

bool validTime(std::string time) 
{
    return (stoi(time.substr(0, 2)) < 24 && stoi(time.substr(3, 6)) < 60);
}
 

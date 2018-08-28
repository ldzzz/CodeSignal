bool isSmooth(std::vector<int> arr) 
{
    return ((arr[0] == arr[arr.size()-1])?( (arr.size() % 2)?(arr[0] == arr[arr.size() / 2]):(arr[0] == (arr[arr.size() / 2] + (arr[(arr.size() / 2) - 1])))):(false));
}


std::vector<int> concatenateArrays(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> ret;
    ret.insert(ret.end(), a.begin(), a.end());
    ret.insert(ret.end(), b.begin(), b.end());
    return ret;
}


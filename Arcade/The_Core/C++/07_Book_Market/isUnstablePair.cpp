bool isUnstablePair(std::string filename1, std::string filename2) 
{
    std::string f1 = filename1, f2 = filename2;
    std::transform(f1.begin(), f1.end(), f1.begin(), ::tolower);
    std::transform(f2.begin(), f2.end(), f2.begin(), ::tolower);
    return (filename1 < filename2) != (f1 < f2);
}


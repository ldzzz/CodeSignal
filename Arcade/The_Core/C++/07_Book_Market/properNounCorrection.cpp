std::string properNounCorrection(std::string noun)
{
    std::transform(noun.begin(), noun.end(), noun.begin(), ::tolower);
    std::transform(noun.begin(), noun.begin()+1, noun.begin(), ::toupper);
    return noun;
}


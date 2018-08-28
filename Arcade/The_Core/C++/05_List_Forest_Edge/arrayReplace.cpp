std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) 
{
    for(auto& elem: inputArray)
        if(elem == elemToReplace)
            elem = substitutionElem;
    return inputArray;
}


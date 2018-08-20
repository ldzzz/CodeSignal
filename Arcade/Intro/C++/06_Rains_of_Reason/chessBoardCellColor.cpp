bool chessBoardCellColor(std::string cell1, std::string cell2) 
{
    //colored cells
    if(((cell1[0] % 2 && cell1[1] % 2) || (!(cell1[0] % 2) && !(cell1[1] % 2))) && 
       ((cell2[0] % 2 && cell2[1] % 2) || (!(cell2[0] % 2) && !(cell2[1] % 2))))
        return true;
    //white cells
    if(((cell1[0] % 2 && !(cell1[1] % 2)) || (!(cell1[0] % 2) && cell1[1] % 2)) &&
       ((cell2[0] % 2 && !(cell2[1] % 2)) || (!(cell2[0] % 2) && cell2[1] % 2)))
        return true;
    return false;
}
 

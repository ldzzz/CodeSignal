int chessKnight(std::string cell) 
{
    int moves = 8;
    //if all possible
    if(cell[0] >= 'c' && cell[0] <= 'f' && cell[1] >= '3' && cell[1] <= '6')
        return moves;
    
    //hard-coding corners
    if((cell[0] == 'a' || cell[0] == 'h') && (cell[1] == '1' || cell[1] == '8'))
       return (moves / 4);
    
    if(((cell[0] == 'b' || cell[0] == 'g') && (cell[1] == '1' || cell[1] == '8')) ||
       ((cell[0] == 'a' || cell[0] == 'h') && (cell[1] == '2' || cell[1] == '7')))
       return((moves / 4) + 1);
    
    int horizontal = 0, vertical = 0;
    if(cell[0] < 'c')
        horizontal = (int)('c' - cell[0]);
    else if(cell[0] > 'f')
        horizontal = (int)(cell[0] - 'f');
    if(cell[1] < '3')
        vertical = (int)('3' - cell[1]);
    else if(cell[1] > '6')
        vertical = (int)(cell[1] - '6');
    
    return (moves - (vertical + horizontal) * 2);
}
 

int electionsWinners(std::vector<int> votes, int k) 
{
    sort(votes.begin(), votes.end());
    int biggest = votes[votes.size() - 1];
    
    if(biggest == votes[votes.size() - 2] && k == 0)
        return 0;
    
    int canWin = votes.size();
    for(auto& elem: votes)
        if(elem + k <= biggest && elem != biggest)
            canWin--;
    
    return canWin;
}

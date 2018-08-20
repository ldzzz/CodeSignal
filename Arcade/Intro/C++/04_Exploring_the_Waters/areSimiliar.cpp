bool areSimilar(std::vector<int> a, std::vector<int> b) 
{
    vector<int> a_, b_;
    
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
        {
          a_.push_back(a[i]);
          b_.push_back(b[i]);
        }
    
    sort(a_.begin(), a_.end());
    sort(b_.begin(), b_.end());
    
    if((a_.size() == 2 && a_.at(0) == b_.at(0) && a_.at(1) == b_.at(1)) || a_.size() == 0)
        return true;
    
    return false;
}
 

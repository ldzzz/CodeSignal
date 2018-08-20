int digitsProduct(int product) 
{
    if(!product)
        return 10;
    if(product < 10)
        return product;
    
    std::string nums = "";
    int div = 9;
    
    while(div > 1)
    {
        while(product % div == 0)
        {
            product /= div;
            nums += std::to_string(div);
        }   
        div--;
    }
    if(product > 9)
        nums = "-1";
    sort(nums.begin(), nums.end());
    return (std::stoi(nums));
    
}
 

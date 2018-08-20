int growingPlant(int upSpeed, int downSpeed, int desiredHeight) 
{
    int days = 1, height = 0;
    while(height < desiredHeight)
    {
        height += upSpeed;
        if(height >= desiredHeight)
            break;
        height -= downSpeed;
        days++;
    }
    return days;
}

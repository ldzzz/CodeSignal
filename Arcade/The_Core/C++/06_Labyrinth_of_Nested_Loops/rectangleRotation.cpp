int rectangleRotation(int a, int b) 
{
    a /= std::sqrt(2);
    b /= std::sqrt(2);
    return 2*a*b + a + b | 1;
}


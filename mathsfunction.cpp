#include <iostream>
#include <cmath>
int main()
{
    double x = 3.1323;
    double y = 7;
    double z;
    // z = std::min(x, y);
    // z = pow(2, 3);
    // z = sqrt(9);
    // neg to positive
    // z = abs(-3);
    z = round(x);
    std::cout
        << z;
    return 0;
}
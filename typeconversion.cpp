#include <iostream>
int main()
{
    // implict
    int a = 10;
    double b = 57.456789900;
    int x = (int)b;
    double y = (double)a;
    // double x = (int)3.14;
    /* int correct = 8;x
    int questions = 10;
    double score = correct / (double)questions * 100;*/
    // std::cout << x;
    std::cout << x << std::endl;
    std::cout << y;
    return 0;
}
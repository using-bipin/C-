#include <iostream>
int main()
{
    int number;
    // do some block of code first
    //  then repeat again if the condition is true
    do
    {
        std::cout << "enter a positive number";
        std::cin >> number;
    } while (number < 0);
    std::cout
        << "the number is:" << number;
    return 0;
}
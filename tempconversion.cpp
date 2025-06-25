#include <iostream>
int main()
{
    double temp;
    char unit;
    std::cout << "F for farenheit\n";
    std::cout << "C for celsius\n";
    std::cout << "what unit you want to convert:\n";
    std::cin >> unit;
    if (unit == 'F' || unit == 'f')
    {
        std::cout << "enter the temprature";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is:" << temp << "F";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "enter the temprature";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "temperature is:" << temp << "C";
    }
    else
        std::cout << "enter only C and F";
    return 0;
}
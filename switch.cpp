#include <iostream>
int main()
{
    /* int month;
    std::cout << "enter a number 1-12";
    std::cin >> month;
    switch (month)
    {
    case 1:
        std::cout << "it the 1st month";
        break;
    case 2:
        std::cout << "it the 2nd month";
        break;
    case 3:
        std::cout << "it the 3rd month";
        break;
    case 4:
        std::cout << "it the 4th month";
        break;
    case 5:
        std::cout << "it the 5th month";
        break;
    case 6:
        std::cout << "it the 6th month";
        break;
    case 7:
        std::cout << "it the 7th month";
        break;
    case 8:
        std::cout << "it the 8th month";
        break;
    case 9:
        std::cout << "it the 9th month";
        break;
    case 10:
        std::cout << "it the 10th month";
        break;
    case 11:
        std::cout << "it the 11th month";
        break;
    case 12:
        std::cout << "it the 12th month";
        break;
    default:
        std::cout << "enter a valid number";
    } */
    char grade;
    std::cout << "enter a grade";
    std::cin >> grade;
    switch (grade)
    {
    case 'A':
        std::cout << "you did great";
        break;
    case 'B':
        std::cout << "you did good";
        break;
    case 'c':
        std::cout << "you did fine";
        break;
    case 'D':
        std::cout << "you did ok";
        break;
    case 'F':
        std::cout << "you failed";
        break;
    default:
        std::cout << "enter a valid value";
    }
}
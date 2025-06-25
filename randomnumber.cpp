#include <iostream>
#include <ctime>
int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;
    std::cout << randNum << std::endl;
    switch (randNum)
    {
    case 1:
        std::cout << "tdy is holiday";
        break;
    case 2:
        std::cout << "tdy is holi";
        break;
    case 3:
        std::cout << "tdy is day";
        break;
    case 4:
        std::cout << "tdy is li";
        break;
    case 5:
        std::cout << "tdy is hol";
        break;
    }
    return 0;
}
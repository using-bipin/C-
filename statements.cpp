#include <iostream>
int main()
{
    int age;
    std::cout << "enter your age";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "you are welcome";
    }
    else
    {
        std::cout << "you get lost";
    }
    return 0;
}
#include <iostream>
#include <string>
std::string eoro(int a)
{
    return (a % 2 == 0) ? "even" : "odd";
}
int main()
{
    int num1;
    std::cout << "enter a number" << std::endl;
    std::cin >> num1;

    std::string result = eoro(num1);
    std::cout << "the number is " << result << std::endl;

    return 0;
}
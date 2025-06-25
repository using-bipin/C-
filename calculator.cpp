#include <iostream>
int main()
{
    char op;
    double a;
    double b;
    double result;
    std::cout << "****CALCULATOR********" << '\n';
    std::cout << "choose a operator";
    std::cin >> op;
    std::cout << "enter first number" << std::endl;
    std::cin >> a;
    std::cout << "enter the second number" << std::endl;
    std::cin >> b;
    switch (op)
    {
    case '+':
        result = a + b;
        std::cout << "result=" << result << std::endl;
        break;
    case '-':
        result = a - b;
        std::cout << "result=" << result << std::endl;
        break;
    case '*':
        result = a * b;
        std::cout << "result=" << result << std::endl;
        break;
    case '/':
        result = a / b;
        std::cout << "result=" << result << std::endl;
        break;
    default:
        std::cout << "enter a valid operator";
    }
}
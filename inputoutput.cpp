#include <iostream>
int main()
{
    std::string name;
    int age;
    std::cout << "What's your age??";
    std::cin >> age;
    std::cout << "What's your fullname??";
    std::getline(std::cin >> std::ws, name);
    std::cout << "hello " << name << std::endl;
    std::cout << "you are " << age << " years old ";
    return 0;
}
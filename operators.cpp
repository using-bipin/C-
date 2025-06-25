#include <iostream>
int main()
{
    int students = 20;
    // students = students + 1;
    students %= 3; // modulus operator
    std::cout << students << std::endl;
    return 0;
}
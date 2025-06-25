#include <iostream>
namespace first
{
    int x = 1999;
}
namespace second
{
    int x = 100;
}
int main()
{
    int x = 10;
    std::cout << second::x;
    return 0;
}
// entities can have same name if namespace is used  namespace name {}
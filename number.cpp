#include <iostream>
using namespace std;
int main()
{
    int number, rev = 0;
    cout << "enter a number" << endl;
    cin >> number;
    while (number != 0)
    {
        rev *= 10;
        int dig = number % 10;
        rev += dig;
        number /= 10;
    }
    cout << "the reverse number is " << rev << endl;
    return 0;
}
// reverse a number
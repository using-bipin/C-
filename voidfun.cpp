#include <iostream>
#include <string>
using namespace std;

void eoro(int a)
{
    string erro = (a % 2 == 0) ? "even" : "odd";
    cout
        << "The number is " << erro << endl;
}

int main()
{
    int num1;

    cout << "Enter a number: ";
    cin >> num1;

    eoro(num1);

    return 0;
}

#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    return fact;
}
int main()
{
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    int result = factorial(num);
    cout << "the factorial is " << result << endl;
    return 0;
}
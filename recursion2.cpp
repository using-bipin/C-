#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return 1; // base case
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    int fib = fibonacci(a);
    cout << "the fibonacci is " << fib << endl;
}
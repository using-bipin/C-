#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1 || n == 0) // base case
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// how it works
// factorial(4)=4*factorial(3);//doesnt return factorial(3) but returns the value 3
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);//meets the condn of if statement
// factorial(4)=4*3*2*1;
int main()
{
    // mostly used for series
    //  the function that calls itself
    //  in non recursive function we use loop
    //  but in recursion we call itself so it works like a loop
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    int fact = factorial(a);
    cout << "the factorial is " << fact << endl;
    return 0;
}
#include <iostream>
using namespace std;
void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    cout << "the factorial is " << fact << endl;
}
int main()
{
    int num;
    cout << "enter a number " << endl;
    cin >> num;
    factorial(num);
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int first, second, n;
    cout << "Enter the first number of the Fibonacci series: ";
    cin >> first;
    cout << "Enter the second number of the Fibonacci series: ";
    cin >> second;
    cout << "Enter how many terms to display: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    cout << first << " " << second << " "; // first and second terms are already printed
    for (int i = 1; i <= n; i++)           // i is related to no. of terms
    {                                      // if we want 9 terms  we start from third i.e i=3
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}

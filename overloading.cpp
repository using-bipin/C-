#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}
int main()
{
    float num1, num2, num3;
    cout << "enter a number:" << endl;
    cin >> num1;
    cout << "enter another number:" << endl;
    cin >> num2;
    cout << "enter another number:" << endl;
    cin >> num3;
    float result = sum(num1, num2, num3);
    cout << "the total sum is " << result << endl;
    return 0;
}
// same name of a function but different parameters
// how to call them??
// just make same datatype and make same number of argument that's easy
// calling like thsi also okk
// sum(4,3)
// sum(4.4,3.3)
// sum(4.4,3.3,5.5)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "enter your name" << endl;
    getline(cin, name);
    cout << "your name is " << name << endl;
    return 0;
}
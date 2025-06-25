#include <iostream>
using namespace std;

int main()
{
    char name[50];

    // Using cin (stops at space)
    cout << "Using cin (stops at space): ";
    cin >> name;
    cout << "You entered: " << name << endl;

    cin.ignore(); // clear newline left in input buffer

    // Using cin.getline (reads full line)
    cout << "Using cin.getline(): ";
    cin.getline(name, 50);
    cout << "You entered: " << name << endl;

    return 0;
}

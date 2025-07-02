#include <iostream>
using namespace std;
int main()
{
    int pin = 997875, epin, ecounter = 0;
    do
    {
        cout << "PIN: " << endl;
        cin >> epin;
        if (pin != epin)
        {
            ecounter++;
        }
    } while (epin != pin && ecounter < 3);
    if (ecounter < 3)
    {
        cout << "Loading..." << endl;
    }
    else
    {
        cout << "Blocked nigga" << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int height;
    int width;
    char symbol;
    cout << "enter height:" << endl;
    cin >> height;
    cout << "enter width:" << endl;
    cin >> width;
    cout << "enter the symbol" << endl;
    cin >> symbol;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}
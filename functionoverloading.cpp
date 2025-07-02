#include <iostream>
using namespace std;
void pizza()
{
    cout << "here is your pizza" << endl;
}
void pizza(string toppings1)
{
    cout << "here is your pizza with " << toppings1 << endl;
}
void pizza(string toppings1, string toppings2)
{
    cout << "here is your pizza with " << toppings1 << " and " << toppings2 << endl;
}
int main()
{
    string name2 = "litchi";
    string name = "mushroom";
    pizza(name, name2);
} // same function name but different parameters
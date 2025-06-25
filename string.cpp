#include <iostream>
int main()
{
    std::string name;
    std::cout << "enter your name:" << std::endl;
    std::getline(std::cin >> std::ws, name);
    /* if (name.length() > 12)
     {
         std::cout << "your name is too long " << std::endl;
     }
     else
     {
         std::cout << "welcome";
     }*/
    /*if (name.empty())
    {
        std::cout << "you nigga write a name ";
    }
    else
    {
        std::cout << "hello" << name;
    }
    // another function is called clear that clears name
    */
    // name.append("@gmail.com");
    // std::cout << "your name is " << name;
    // dipslay character of name
    // std::cout << name.at(5);
    // we have insert function if you want to insert something
    name.insert(3, "nigga");
    std::cout << name;
    // name.find(' '); used to find something
    // name.erase(0,3); index   no 0 - 3.
    return 0;
}
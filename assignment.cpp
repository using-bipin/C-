#include <iostream>

int main()
{
    int row;
    int col;
    char symbol;
    int i;
    int j;
    std::cout << "Enter the number of rows:" << std::endl;
    std::cin >> row;
    std::cout << "Enter the number of column:" << std::endl;
    std::cin >> col;
    std::cout << "Enter the symbol:" << std::endl;
    std::cin >> symbol;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
}
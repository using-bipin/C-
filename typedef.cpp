#include <iostream>
#include <vector>
/* typedef std::string text_t;
typedef int integer_t; */
using text_t = std::string;
using integer_t = int;
using name_t = char;
int main()
{
    integer_t x = 9999;
    text_t name = "Bipin Danga";
    name_t initial = 'A';
    std::cout << initial;
    return 0;
}
// typedef used to replace the datatype
// only in string std not in other data type
// typedef replaced by using
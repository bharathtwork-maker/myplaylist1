#include <iostream>
namespace first{
    int x=50;
}
using string=std::string;
int main()
{
    int x=97;
    string name="bharath\n";
           /*here if you use first::x it compile name space
            but if you use only x it compile x ehich is int main function*/
    first::x+=9;  //this is arithmatic operator
    std::cout<<name;
    std::cout<<first::x;      // use `first::x` (scope resolution) to access namespace variable
    return 0;
}
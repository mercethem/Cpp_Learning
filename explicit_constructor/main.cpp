/**
    Explicit contractor is NOT a member special function (keyword : explicit)
    A keyword inject a skill to constructors (Use for conversion contructor)

    keyword of explicit only can usable inline!!!!!!

 */

#include <iostream>

class Myclass {
public:
    Myclass() = default;

//    Myclass(int);

    explicit Myclass(int); //explicit contructor
};

int main()
{
    Myclass mx;
    int ival = 10;
//    mx = ival; //Syntax error because of explicit constructor
    mx = static_cast<Myclass>(ival); //conversion int to Myclass within control
    return 0;
}

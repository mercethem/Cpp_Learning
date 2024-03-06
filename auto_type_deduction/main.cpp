/*

 auto keyword is different from C
 C   ===> automatic storage duration
 C++ ===> type deduction (placeholder)

 -Invalid default initialization

 */

struct Data {

};

Data func();

#include <iostream>

int main() {
    auto val1 = 'c'; //auto equal to char
    auto val2 = 10; //auto equal to int
    auto val3 = 10u; //auto equal unsigned int
    auto val4 = 10.0f; //auto equal to float
    auto val5 = 1.1; //auto equal to double
    auto val6 = "data"; //auto equal to const char*
    auto val7 = ""; //auto equal to const char*

    auto x = func();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

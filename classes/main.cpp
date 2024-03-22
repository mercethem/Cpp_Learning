#include <iostream>

/**
 class specifiers : data members, member functions(methods), member type-type member-nested type

 class MyClass{
    (declarative region)
    class members stay here!
 };

 Data members:
        1) non-static data members ===> static int x;
        2) static data members     ===> int x;  //that as like as in C

 Variables calls    INSTANCE / OBJECT / CLASS OBJECT    in object oriented

 int x;     ===> initialize
 MyClass y; ===> instantiate



 class Data{
 //That is an empty class and sizeof of empty class is 1 Byte
 };


*/

void func(int, int); //global function - free function - stand-alone function ===> using style like as C

class MyClass {
    int x;
    void func(int, int); //member function ===> totally specific about C++
};

int main()
{
    std::cout << sizeof(MyClass) << "\n";
}
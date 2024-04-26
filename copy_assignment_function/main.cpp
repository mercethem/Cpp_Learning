/**
 copy assignment functions is a special member function

 MyClass a, b;
 a = b;                     ===> copy assignment function!
 a.operator(b); //same above

 Written by Compiler (Defaulted by compiler) copy assignment function
 - public
 - non-static
 - inline

 class MyClass;
 MyClass& operator=(const MyClass &other);
 */

#include <iostream>

class MyClass {
public:
    MyClass(const MyClass &other) : ax {other.ax}, bx {other.bx};
    MyClass& operator=(const MyClass &other)
    {
        ax = other.ax;
        bx = other.bx;

        return *this;
    }
private:
    int ax;
    double bx;


};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

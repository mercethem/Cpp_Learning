#include <iostream>

class MyClass {
public:
    MyClass();
};

MyClass::MyClass()
{
    static int x = 0;
    std::cout << x++ << " ";
}

int main()
{
    MyClass a[100];
    return 0;
}

#include <iostream>

/**
 Keyword
 This ===> a pointer
 We can use only in non-static member function about classes
 */


class MyClass {
public:
    void func();
};

void MyClass::func()
{
    this->func();
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

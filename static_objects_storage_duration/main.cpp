#include <iostream>

class MyClass {
public:
    MyClass();

    ~MyClass();
};

MyClass::MyClass()
{
    std::cout << "MyClass object storage duration was started\n";

}

MyClass::~MyClass()
{
    std::cout << "MyClass object storage duration was finished\n";
}


void func()
{
    MyClass s_object;
}

int main()
{

    std::cout << "main was started\n";

    func();
    func();
    func();
    func();

    std::cout << "main was finished\n";


    return 0;
}

#include <iostream>

class MyClass {
public:
    MyClass(int val = 0);

    MyClass(const MyClass& other);

    ~MyClass();

private:
    int m_x;
};

MyClass::MyClass(int val) : m_x{ val }
{
    std::cout << "My Class constructor this = " << this << "\n";
}

MyClass::MyClass(const MyClass& other) : m_x{ other.m_x } //===> This copy constructor such as compilers' do
{
    std::cout << "My Copy constuctur this = " << this << "\n";
}

MyClass::~MyClass()
{
    std::cout << "My destructor this = " << this << "\n";
}

int main()
{
    MyClass x(50);
    MyClass y = x;

    std::cout << "&x =>  " << &x << "\n";
    std::cout << "&y =>  " << &y << "\n";
}

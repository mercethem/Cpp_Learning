/**
 constructor initializer list /member initializer list(MIL)
 */

#include <iostream>

class MyClass {
public:
    MyClass();
    void print() const;
private:
    int m_a, m_b;
};

MyClass::MyClass() : m_a{10}, m_b{20}
{
    std::cout << "My Class Default Constructor\n";

}

void MyClass::print() const
{
    std::cout << "m_a = " << m_a << "    m_b = " << m_b << "\n";
}

int main()
{
    MyClass x;
    x.print();

    return 0;
}

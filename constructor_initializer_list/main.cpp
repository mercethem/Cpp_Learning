/**
 constructor initializer list /member initializer list(M.I.L.)
 the M.I.L. is different from the initializer because
 ===> when we use the initializer : constructor of local objects create with garbage values and initialize members
                                    constructor of global objects create with default values and initialize members
 ===> when we use the M.I.L.         : constructor of local or global objects create with initialized values

 ATTENTION: M.I.L. more efficient than the initializer!!!!

 ATTENTION: There isn't able to any constructor about class!!! But compiler create a constructor itself!
 */

#include <iostream>

class MyClass {
public:
    MyClass();

    void print() const;

private:
    int m_a, m_b; //m_a created first then m_b!!!
};

//MyClass::MyClass() : m_a(10), m_b(20)
MyClass::MyClass() : m_a{ 10 }, m_b{ 20 } //===> Constructor initializer list
{

    /*
    m_a = 10; //===> initializer !!! Different above
    m_b = 20;
     */
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

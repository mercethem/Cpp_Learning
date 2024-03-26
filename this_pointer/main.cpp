#include <iostream>

/**
 Keyword
 This ===> a keyword and pointer
 We can use for only in non-static member function about classes

 'this' points the object
 'this' PR value expression such as  ===>   &x this->x

 if we use '*this' than we can use the object!
 this  ===> pointer of object NOT THE OBJECT ONLY ADDRESS!!!
 *this ===> access the objects THAT IS NOT A ADDRESS ONLY OBJECT ITSELF


 */


class MyClass {
public:
    void func();

    void foo();

private:
    int m_x;
};

void MyClass::func()
{
//    m_x = 10;
//    MyClass::m_x = 10; //equal to above instance (m_x unqualified name but m_x is qualified name
//                       // because of be an operand of resolution operator)
//
//    m_x = 10;
//    this -> m_x = 10; //equal to above instance
////----------------------------------------------------------------------------------------------------------------------
//    func();
//    this -> func(); //equal to above instance
//
//    func();
//    MyClass::func(); //equal to above instance

    std::cout << "this    : " << this << "\n";
}

void f1(MyClass *p);

void f2(MyClass &p);

void f3(MyClass);

void MyClass::foo()
{
    f1(this);
    f2(*this);
    f3(*this);
}

int main()
{
    MyClass myClass;

    std::cout << "myClass : " << &myClass << "\n";

    myClass.func();


    return 0;
}

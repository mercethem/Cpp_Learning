#include <iostream>

class MyClass {
public:
    MyClass(); //===> CONSTRUCTOR! CAN NOT BE STATIC/ CAN NOT BE CONST
    MyClass(int);

    MyClass(double);

    MyClass(int, int);

    MyClass(int, double);

    ~MyClass();
};

MyClass::MyClass()
{
    std::cout << "Address : " << this << "  - Constructor was called!" << "\n";
}

MyClass::~MyClass()
{
    std::cout << "Address : " << this << "  - Destructor was called!" << "\n";
}

MyClass myClass;
/**
 When we default initialize a object then default constructor call!!!
*/


int main()
{

    /**
     ATTENTION:
     Default Constructor of myClass     ===> starts BEFORE main function
     Destructor of myClass              ===> starts AFTER  main function

     this in constructor and this in destructor are same because same object of 'this' !!!
     this is a pointer and point same object in here

     */

    std::cout << "main started\n";

    std::cout << "main finished\n";


    return 0;
}


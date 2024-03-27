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


    std::cout << "\nmain started\n";

    std::cout << "&g ===> " << &myClass;

    std::cout << "\nmain finished\n";

    /**
     ATTENTION : Object constructors of classes call by sort but destructors calls like a steak LIFO(Last in first out)
     Objects storage duration start first scope start and finished when scopes finished!

     objects call when they in namespace scope starts before main
     objects call when they in main scope starts before main
     objects call when they in local scope starts when it calls
     static objects call when they call in local or main scope when it calls

     */



    return 0;
}


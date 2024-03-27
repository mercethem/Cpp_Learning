#include <iostream>

/**
 1) The constructor function/functions must have the same name as the class
 2) CAN NOT be a global function
 3) CAN NOT be a static member function of the class (must be non-constant)
 4) There is not a return concept
        for instance:
            class MyClass{
            public:
                MyClass();   ===> There is no return concept, not even void!!!!
            };
 5) CAN NOT be a const
 6) be a public or a private or a protected ATTENTION Be careful to access control!!!
 7) A Class can have to lots of contracture with different signature result is Can do overload

 ATTENTION : 1) If a constructor have not got any parameter that constructor name is DEFAULT CONSTRUCTOR
             2)

 */

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
     default constructor of myClass start before main function
     Destructor of myClass start after main function
     */
    std::cout << "main started\n";

    std::cout << "main finished\n";


    return 0;
}

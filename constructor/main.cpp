#include <iostream>

/**
 1) The constructor function/functions must have the same name as the class
 2) CAN NOT be a global function
 3) CAN NOT be a static member function of the class (must be non-constant)
 4) There is not a return concept
        for instance:
            class MyClass{
            public:
                Myclass();   ===> There is no return concept, not even void!!!!
            };
 5) CAN NOT be a const
 6) be a public or a private or a protected ATTENTION Be careful to access control!!!
 */

class Myclass{
public:
    Myclass(); //===> CONSTRUCTOR! CAN NOT BE STATIC/ CAN NOT BE CONST
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

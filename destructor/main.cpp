#include <iostream>

/**
 1) Name of destructor same as contructor but have a tilda (~) front of the name
 2) Can NOT be a global function
 3) Can NOT be a static member function of the class (non-static)
 4) Can NOT be a const member function of the class (non-const)
 4) There is not a return concept
        for instance:
            class MyClass{
            public:
                ~Myclass();   ===> There is no return concept, not even void!!!!
            };
 5) Can be a function with public, private and protected access specifiers
 6) Can NOT be do overload!!!

 ATTENTION : DO NOT CALL DESTRUCTOR WITH HIM NAME THAT SPECIFIC SITUATION FOR!!!
  */

class MyClass {
public:
    MyClass();

    ~MyClass(); //DO NOT WRITE SUCH AS THAT CODE!
    //~MyClass(int);Syntax error because destructors can not be overload! //DO NOT WRITE SUCH AS THAT CODE!

private:
};

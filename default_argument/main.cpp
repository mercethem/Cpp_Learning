/*
 If operands of function is default arguments, become default arguments after from first default argument
 - void foo(int x = 10, int y); //SYNTAX ERROR
 - void foo(int x = 10, int y, int z = 30); //SYNTAX ERROR
 - void foo(int x = 10, int y = 20, int z = 30); //VALID
 - void foo(); //VALID



 */


/**
    Default arguments always be the last arguments in function
    void foo(1, ,3);//SYNTAX ERROR
 */


#include <iostream>

void foo (int x = 1, int y = 2, int z = 3); //VALID : with parameters names
void func (int = 10, int  = 20, int  = 30); //VALID : without parameters names

int foo2(int x = 10);
int foo3(int y = foo2());


int main ()
{
    foo (10, 20, 30);
    foo (10, 20);
    foo (10);
    foo ();

    return 0;
}

void foo (int x, int y, int z)
{
    std::cout << "x = " << x << " y = " << y << " z = " << z << "\n";

    foo2(); //foo3 (foo2(10)); EQUAL BOTH
}



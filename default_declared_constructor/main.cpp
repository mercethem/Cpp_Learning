#include <iostream>

/*
 https://www.youtube.com/watch?v=vLinb2fgkHk
 Howard Hinnant
 */

class MyClass { //taken from howard hinnant
public:
//    MyClass(); ==> user declared defined
//
//    MyClass() = default; ==> user declared default by compiler
//
//    MyClass() = delete; ==> user declared deleted by user
    /**
     this deleted scenario is when we are use something in class but when compiler create a constructor then that situation
     is a syntax error result is compiler delete that constructor!

     instance below

     */
};

class MyClass2 {

private:
    const int x;
};

class A{
public:
    A();
    A(int);
};

class A1{
private:
    A1();
};

class B{
    A ax;
};

class B1{
    A1 ax;
};


int main()
{
    B1 bx; //SYNTAX ERROR because of implicitly deleted declared
    B ax; //There is no problem for because of there is default constructor of class A!!! ==> A();
    MyClass2 mx;
    //Syntax error :  ‘MyClass2::MyClass2()’ is implicitly deleted because the default definition would be ill-formed
    //ERROR NOTE : call to implicitly-deleted default  constructor  of 'MyClass2'

    //The Result is when compiler create the default compiler and if there is syntax error than compiler delete himself to the default constructor!



}

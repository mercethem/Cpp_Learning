/**
 !!!static keyword use for unchangeable instances!!!

 if a instance is static then no need to create a object! Because of there is not a pointer of this of them!
 Sooooo we can call them with resolution operator; for instance ==>  Myclass::func();

 static instances created by compiler before of main!
 global instances are static

 if a static instance will be a mutable then that instance should be private
 but clients will able to use the instances should be public!

 we can not use nonstatic member functions or nonstatic member variables in static member function because of static member
 functions do not need a object and nonstatic members need a object SO THERE IS NOT A OBJECT FOR STATIC MEMBERS!!!!!!

 !!!static data members of class can not able to initialize with constructor initializer list!!!

 */

#include <iostream>

class Myclass {
public:
    static int s_ival;


    void func3();  //can not overload like below
    //static void func3(); //syntax error because of above

    static void s_foo();

    int ival;

    void foo();

    const static int s_cival; //NOT SYNTAX ERROR

    static void x() const; //SYNTAX ERROR

};

void Myclass::foo()
{
    s_ival = 5;
};

void Myclass::s_foo()
{
    Myclass* m; //NOT SYNTAX ERROR
    m->ival = 5;
}


int main()
{
    Myclass* mx = new Myclass();
    Myclass mx2;

    Myclass::s_ival = 10; //USE!!!
    mx->ival = 20; //Do NOT use
    mx2.ival = 20; //Do NOT use


    return 0;
}

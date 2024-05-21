/**
 !!!static keyword use for unchangeable instances!!!
 if a instance is static then no need to create a object!
 static instances created by compiler before of main!
 global instances are static

 if a static instance will be a mutable then that instance should be private
 but clients will able to use the instances should be public!

 !!!static data members of class can not able to initialize with constructor initializer list!!!

 */

#include <iostream>

class Myclass {
public:
    static int ival;
};


int main()
{
    Myclass* mx = new Myclass();
    Myclass mx2;

    Myclass::ival = 10; //USE!!!
    mx->ival = 20; //Do NOT use
    mx2.ival = 20; //Do NOT use


    return 0;
}

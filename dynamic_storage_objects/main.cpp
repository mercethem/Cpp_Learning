/*
 storage duration list:
    - static duration ==> (in compile time!) global variables, static local variables in functions, static members in functions
    - automatic duration ==> (in compiler time!) variables in local functions etc.
    - dynamic duration ==> (in run time!) we can start and finish to life duration in runtime

 ATTENTION = malloc uses for memory allocation does not for create an object
 dynamic duration class is an object that in run time duration created by us and finish duration choose by us

 there are operators(expressions) create dynamic object in c++

 keywords ==> new expressions(new operators) ==> begin storage duration
              delete expressions(new operators) ==> finish storage duration
  new int, new Myclass, new Ethem, etc. ; variable types ==> int*, Myclass*, Ethem*


 */

#include <iostream>

class Myclass {
public:
    void func();
};

int main()
{
    Myclass* p = new Myclass;
    int* x = new int;

    Myclass* p1(new Myclass);
    Myclass* p2{ new Myclass };
    auto p3 = new Myclass;
    auto p4(new Myclass);
    auto p5{ new Myclass };

    p1->func();
    p2->func();

    delete x;
    delete p;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;

    return 0;
}

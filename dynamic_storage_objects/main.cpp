/**
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

 operator new's return value type is equal to malloc at C, malloc failed is null, new failed is exception throw(std::bad_alloc)

 delete is equal to free at C


 ATTENTION :
 ------------
 void* operator new(size_t t); //new operator calls constructor
 void  operator delete(void* ); //delete operator calls destructor

 operator new and operator of new are different each other
 (operator new calls first operator new(), second the call to constructor)

 operator delete and operator of delete are different each other
 (operator delete calls first destructor, second the call to operator delete() )

 operator delete and operator new are functions
 operator of delete and operator of new are operators

 resource leak = if you have used operator of new and haven't used operator of deleted!!!!
                 Because there is not garbage collector in C++

 ATTENTION : We can not overload to operator of new or operator of delete BUT we can overload operator new and operator delete!!!


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

    Myclass &r = *new Myclass(); // Ugly code -_-
    delete &r;                   // Because of &r!!!

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

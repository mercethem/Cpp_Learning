/*
 Overloading is write that have got same name functions same time (to overload a function)
 Introduction of overloading is ===> must be ===> same scope, same name, different signature


 Signature = Parametrics except data type of return value
            for instance : int func (int); double func (int); Same signature of these functions

 There are two overloading types:
 1)program understands which function called on compile-time (static binding / early binding)
 2)program understands which function called on run-time (dynamic binding / late binding)


 Is there function overloading ?
 step 1 : Names of a lot of functions in same scope that is first step of overloading so same scope same function name

          If names of a lot of functions in different scope is that NOT an overloading that is a name hiding / name masking
          for instance : int func(int); int main () { int func (double)}

 step 2 : Signatures about names of a lot of functions in same scope have to be different
          so different signature, same scope and same name



  */

/**
 -same signature and same return values
 int func (int); ===> This situation is not an overloading, but it is VALID because that is a redeclaration
 int func (int);

 -same signature but different return values
 int func (int); ===> This situation is not an overloading,  but it is a SYNTAX ERROR
 double func (int);

 -different signature and doesn't matter of return value
 int func(int);
 int func(int, int); ===> The function have got 2 overloads

 int func(int);
 int func(int, int);
 int func(double) ===> The function have got 3 overloads

 int func(int);
 int func(int, int);
 int func(double)
 int func(int*)===> The function have got 4 overloads


 int func(int);
 int func(int, int x = 5); ===> There are 2 function overloading

------------------------------------------------------------------------------------------------------------------------
 ATTENTION FOR FUNCTION OVERLOADING!!!!!!!!!!!!!!!!!!!!!!!!!!!!

 void func (int);
 void func (const int); ===> There is not a function overloading!!! That is a redeclaration

 void func(int x) {};
 void func(const int x) {}; ===> There is not a function overloading!!! That is a redefinition but so SYNTAX ERROR

 void func(int*);
 void func(const int*); ===> There is a function overloading because that is a pointer!!!!

 void func(int* p);
 void func(int* const p); ===> There is NOT a function overloading!!!!

------------------------------------------------------------------------------------------------------------------------

 typedef int itype;

 void func(int);
 void func(itype); ===> There is NOT function overloading that is a redeclaration!!!













 */

#include <iostream>

int main ()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

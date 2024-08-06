/**

 operator overloading (compile-time)
   - global operator functions
   - (non-static) member operator functions

 member operator functions can not be static member function

 operator overloading is actually call a function when a class object be a operand of a operator

 Rules:
 1- operator is be in the cpp operand list
 2- one of the operands be a class type or enum type
 3- some operators can not overload (arity is important {arity : unary, binary, ternary} )
        resolution operator '::'
        dot operator(member selection) '.'
        ternary '? :'
        member pointer '.*'
        sizeof 'sizeof'
        typeid 'typeid'

 4- operatorOPERATOR ==> operator+ / operator* / operator! / operator< / operator[] ==> SYNTAX RULE

ATTENTION: if return value is a L value expression then return value have to be a reference '&'
           if return value is a R value expression then return value have to be a not-reference

Instance: A& operator+=(const A&); --> *this a changeable value so function is not a const and operand is not a
          changeable so operand have to be a const

INSTANCES:
----------

if return value is not a changeable value so function have to be const function --> bool operand<(const A&)const;
if return value is a changeable value so function have to be non-const function --> bool operand<(const A&);
if operand value is not a changeable value so have to be const operand          --> bool operand<(const A&)const;
if operand value is a changeable value so have to be non-const operand          --> bool operand<(A&)const;


 ATTENTION
 ---------
 ->, () have to be --> global operator function


 symmetric binary operator --> global operator function     (a < b, a > b)
 side effective operator   --> member operator  function    (++, --)



 Attention: if global functions need in global but operator overloading type private member operator function then
            that operator function able to FRIEND! Because private area is --> access control!


 */

#include "m_int.h"
#include <iostream>
#include <fstream>

int main()
{
    M_int mx, my, mz;

    std::cout << "Please enter three integer:\n";
    std::cin >> mx >> my >> mz;
    std::cout << mx << " " << my << " " << mz << "\n";

    std::ofstream ofs{ "/media/asus/Software/Cpp_Learning/operator_overloading/out.txt" };
    if (!ofs) {
        std::cerr << "out.txt file have not created";
        exit(EXIT_FAILURE);
    }

    ofs << mx << " " << my << " " << mz << "\n";
}

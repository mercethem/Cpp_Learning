/**

 operator overloading (compile-time)
   - global operator functions
   - (non-static) member operator functions

 member operator functions can not be static member function

 operator overloading is actually call a function when a class object be a operand of a operator

 Rules:
 1- operator is be in the cpp operand list
 2- one of the operands be a class type or enum type
 3- some operators can not overload
        resolution operator '::'
        dot operator(member selection) '.'
        ternary '? :'
        member pointer '.*'
        sizeof 'sizeof'
        typeid 'typeid'

 4- operatorOPERATOR ==> operator+ / operator* / operator! / operator< / operator[] ==> SYNTAX RULE
*/
/*
 constexpr known and use in compile-time
 constexpr use where need a constant expression!!!
 constexpr does implicit const!!!
 ATTENTION: If you use constant value inside const function then return value calculate in compile-time
            If you use variable value inside const function then return value calculate in run-time
 */

#include <iostream>


/**
 return value of const functions' operand and values are const objects so  return value create compile-time

 */
constexpr int square (int x)
{
    return x * x;
}
int a[square (15)]; //If you don't use constexpr function you can not use function return value inside a array.
//int b[square (x + 5)]; // If you use a value operand for function then function return value is calculate in run-time



int func ();

int main ()
{
    const int x = 10;       //constant expression is valid initialized
    //const int y = func ();   //non-constant expression is valid initialized

    //++x; SYNTAX ERROR because x is a constant
    //++y; SYNTAX ERROR because x is a constant

    int a[x] = { 0 };
    //int b[y] = { 0 }; SYNTAX ERROR because
    // If you need a constant expression you can use if you initialized with constant expression

    /*
     Can we use if we need a constant expression ? It depends! Depends on if const expr. initialized with constant expr.
     */


    {
        constexpr int x = 10;    //constexpr use for when we need a constant expression such as in for in switch-case etc.
        constexpr int y = x * 5;
    }
    {
        constexpr int a = 5;
        constexpr int r = square (5);
        std::cout << r ;
    }




    return 0;
}



#include <iostream>

int func ();

int main ()
{
    const int x = 10;       //constant expression initialized valid in C/C++
    const int y = func ();   //non-constant expression initialized valid in C/C++

    //++x; SYNTAX ERROR because x is a constant
    //++y; SYNTAX ERROR because x is a constant

    int a[x] = { 0 };
    //int b[y] = { 0 }; SYNTAX ERROR because
    // If you need a constant expression you can use if you initialized with constant expression

    /*
     Can we use if we need a constant expression ? It depends! Depends on if const expr. initialized with constant expr.
     */

    return 0;
}

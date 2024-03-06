/*

 R value references uses in:
 - Move semantics "That approach created by Howard Hinnant" for instance //void func(T &&r);
 - Perfect forwarding

 NOTE: Move semantics generally doesn't use with const keyword because we want change the value within move semantics
 but if you want to use your value with const that is valid BUT you can not change the value. SO if you want to use
 move semantics your purpose is change the value of R value references' bound object

 */

#include <iostream>


int main()
{
    int x = 10;

    int& r1 = x; //L value reference (L value references binds L value expression) except const values expression!!!
    int&& y = x + 10; //R value reference (R value references binds R value expressions)
    ///ATTENTION: Data type of r2 is R value reference(int&&) BUT value category of r2 is L value expression
    int& r2 = y;


    return 0;
}

/*

 decltype(operand);

 a) operand is a name format: for instance decltype(x); decltype(ptr->x); decltype(a.x);
    Data Type is what Data type of operand

 b) operand is NOT a name format: for instance decltype(x + 5); decltype(*ptr); decltype((x));

 */


#include <iostream>


int main ()
{
    {///FOR OPERAND IS A NAME FORMAT

        int x = 10;
        int &r = x;
        int a[10]{ };
        const int b[5] = { 1, 2, 3, 4, 5 };
        const int y{ 5 };
        const int z = 50;

        //Data Types
        decltype (x); //int
        decltype (r); //int&
        decltype (a); //int[10]       int[] is incomplete type    but     int[10] is complete type
        decltype (b); //const int[5]
        decltype (y); //const int
        //decltype (r) t; SYNTAX ERROR because Data type of t is int& so that we have initialized that
        decltype (a) k; //int[10] equal to  ===> int k[10];
        decltype (a) c[20]; // equal to ===> int c [20][10] / NOT int c[10][20]
        //decltype (z) t; SYNTAX ERROR because Data type of t is const int so that we have initialized that
    }

    {///FOR OPERAND IS NOT A NAME FORMAT





    }

    return 0;
}

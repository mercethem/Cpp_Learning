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
        /*
         What is the operand decltype is that it is!
         What is the decltype deduction that about expression value category

         a) If expression is PR value expression Data Type of decltype is itself  ===> T
         b) If expression is L  value expression Data Type of decltype is L& ===> T&
         c) If expression is X value expression Data Type of decltype is &&  ===> T&&


         */


        {
            int x = 10;
            decltype (x + 5) y; //Data type of y is int
        }

        {
            int x = 10;
            int y = 10;
            int* ptr = &x;

            decltype (*ptr) z = y; //Data type of z is int&
        }
        {
            int x = 10;
            int y = 20;

            decltype (x) aa = y; //Data type of aa is int;
            ///ATTENTION decltype((x)); ===> If there is much parenthesis in decltype, Data type will be T&!!! NOT only T
            decltype ((x)) bb= y; //Data type of bb is int&;
        }

        {
            int x = 10;
            int y = 20;

            decltype (++x) z= y; //Data type of z is int&
            //Because ++x is L value expression and decltype rules say for that situation L value expr. is operand
            // of decltype as result data type of decltype is T&

            ///===> ATTENTION decltype() is like sizeof() BECAUSE
            ///==>  Unevaluated Context so if you print to x as result is 20!!! NOT 21!!!
            ///UNEVALUATED CONTEXT is a standard explanation that do not process code!!!
            ///As Result ===> if you call a function or do such a something like ++x compiler do not call!!!


        }
    }

    return 0;
}

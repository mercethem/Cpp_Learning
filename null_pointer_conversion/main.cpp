#include <iostream>

/**

 0 ===> int* so there is null pointer conversion and that is DANGEROUS!!!
 0 is a int

 so these are viable and legal but int is exact match and result is overload within int function calls
 if we want to use 0 for null than use nullptr this situation is so DANGEROUS!!!!

 We should to use nullptr!!!!! because of nullptr conversion maybe overloading have int and int* sametime!!!

 but our function overloading not int and if our functions overloading are double that situation is different to above
 that situation is ambiguity



 TRUE WAY

 void func(nullptr_t);

 int main()
 {
 func(nullptr)
 }



 */

int main()
{
    {
        void func(int* p);
        func(0);
    }

    {
        void func(int);
        void func(int*);

        int x {0};
        func(x);
    }
    return 0;
}

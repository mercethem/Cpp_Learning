/**
 Reference is same to const pointer! (int* const ptr) Top level pointer equal to reference

 int x = 10;
 int* p = &x; * is a declarator, not a operator
 int& r = x;  & is a declarator, not a operator



 addresses of k and r or x and r are same. r is a ref
 (reference is like a pointer but just easier writing than pointer)
 For instance : int x = 10; int& r = x; it's meaning, r equal to x. if x changed or r so other one changes!

 ATTENTION:
 int x = 10;
 int y = 20;
 int& r = x; //int& r(x); int r{ x }; all of them are same!
 r = y; //it's meaning x equal to y!!! r bind x, not y!!!

 -Reference values can not default initialize (For instance const int x) so you have to use declarator!
 -Pointer arrays are exist but Reference arrays do not exist
 */
#include <iostream>

void Swap_ptr(int *p1, int *p2) //Swap within pointers
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Swap_ref(int &r1, int &r2) //Swap within references
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

void foo(int &r)
{
    std::cout << "&r = " << &r << "\n";
}

int main()
{

    int k = 10;
    foo(k);
    std::cout << "&k = " << &k << "\n";


    printf("\n");
    int x = 20;
    int &r = x;

    std::cout << "&r = " << &r << "\n";
    std::cout << "&x = " << &x << "\n";



    return 0;
}

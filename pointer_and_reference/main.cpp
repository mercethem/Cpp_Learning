/**

    Pointers and references almost same things. But if you want to const with ref just one difference
 that difference is for top level const because references are const already do not use const keyword
 for low level const!

 ATTENTION: Other rules are same!

 Pointers can be nullable (NULL in C nullptr in C++) but references can not be nullable
 Pointers are re-bindable but references are not re-bindable
 Can be a Pointer array but can not be a reference array

 */


#include <iostream>


int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *ptr{a};
    int *&r{ptr};
    ++r; // ++ ptr;
    ++*r; // ++ *ptr;
    for (auto val: a) //it is likewise strlen within for loop!
        std::cout << val << " "; // 10 21 30 40 50
}
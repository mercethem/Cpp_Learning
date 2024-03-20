/*
 void func(T* ptr);
 void func(const T* ptr); //const overloading with pointer

 void func(T* const ptr); //That is a redeclaration not a overloading!!!

 void foo(T &);
 void foo(const T &); //const overloading with reference


 ATTENTION : if your parameter is const than const overloading calls
             if your parameter is not a const than normal overloading calls
 */

#include <iostream>


void func(int *p)
{
    std::cout << "func(int* )\n";
}

void func(const int *p)
{
    std::cout << "func(const int*)\n";
}
//function overloading to above functions


void foo(int &)
{
    std::cout << "func(int &)\n";
}

void foo(const int &)
{

    std::cout << "func(const int &)\n";
}


int main()
{
    const int x{ 10 };
    func(&x); // only second one is viable

    int y{ 20 };
    func(&y); //both functions are viable but normal function calls

    const int z{ 30 };
    foo(z);// only second one is viable

    int t{ 40 };
    foo(t);//both functions are viable but normal function calls

    return 0;
}

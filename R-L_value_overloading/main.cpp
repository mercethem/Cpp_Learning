#include <iostream>

void func(int &)
{
    std::cout << "func(int&)" << "\n";
}


void func(int &&)
{
    std::cout << "func(int&&)" << "\n";
}



void foo(const int &)//1
{
    std::cout << "func(const int&)" << "\n";
}

void foo(int &&)
{
    std::cout << "func(int&&)" << "\n";
}


void function(int &)//2
{
    std::cout << "func(int&)" << "\n";
}

void function(const int &)//3
{
    std::cout << "func(const int&)" << "\n";
}

void function(int &&)
{
    std::cout << "func(int&&)" << "\n";
}


int main()
{
    int x{ 10 };
    const int y{20};
    func(x);//first function is viable but second one is not viable function
    func(20);//first function is not viable but second one is viable function

    printf("\n");

    foo(x); //first function is viable but second one is not viable function
    foo(y); //second function is viable exact match!!!
    foo(20); //BOTH FUNCTION ARE VIABLE!!!! chosen one is r value reference function!!!
    /**
      THE WINNER IS R VALUE REFERENCE BECAUSE OF RULE OF OVERLOAD RESOLUTION
     */

    printf("\n");

    function(x); //x is L value expression so first function is viable and first overloading uses
    function(y); //y is const L value expression so second function is viable and second overloading uses
    function(20); //20 is R value expression so second and third functions is viable third overloading uses


}

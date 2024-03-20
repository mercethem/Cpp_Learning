
#include <iostream>

int main()
{
    int x; //default initialization
    /**
     references can not initialize default
     const types can not initialize default
     with auto specifiers can not initialize defalt

     if you use default initialize in automatic storage duration variables take undetermined value(garbage value)
     if you use default initialize in static storage duration variables take arithmetic = 0, bool = false, pointer = nullptr !!!!
     classes = default constructor
     */

    int y{ }; //value initialization
    /**
     Notice that it is empty inside curly braces
     primitive types are zero initialize, value of y is not a undetermined value, value of y is ZERO of false of nullptr!
     int y{ 0 }; equal to int y{ };
     bool y{ false }; equal to bool y{ };
     int* y{ }; equal to int* y{ nullptr };

     int a[10]{ }; all elements are ZERO

     */

    int z{ 20 }; //direct list initialization

    int t(10); //direct initialization

    int k = 30;

    return 0;
}

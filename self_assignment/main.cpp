#include <iostream>

int main()
{
    int k = 10;
    k = k; //That is NOT a SYNTAX ERROR that is a self assignment but that is WRONG!!!!

    int x = 100;
    int* iptr = &x;
    int& iref = x;

    *iptr = iref; ///That instance is a self assignment
    return 0;
}

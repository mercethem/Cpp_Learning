/**
 RULES
 1) at least one parameter is greater than the others about choose rules
 2) the other parameters are not worse than
 */
#include <iostream>

void func(int, double, long);
void func(long, int, bool);
void func(double, float, int);

int main()
{
    //func(12, 5, 5); //first function is exact match for first argument, second function is exact match for second argument,
    //third function is exact match for third argument (SYNTAX ERROR!!!)

    func(10u ,20L, true ); //second one is best choose

    return 0;
}

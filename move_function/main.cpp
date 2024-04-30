/**

 MOVE DOESN'T MOVE!! :))

 move() use for casting about R value expression (That name is wrong chosen from cpp writer!)
 This function is only usable for cast L value expr. to R value expr. NOT ABOUT MOVE CONSTRUCTOR IN STEALING!!!!!

 Myclass a (x); //copy constructor because of x is ==> L value expression
 Myclass a (move(x)); //move constructor because of move(x) ==> R value expression


 x = y; ==> copy assignment
 x = move(y); ==> move assignment (DON'T FORGET When source of 'y' stolen you must not use! Because of UB!!!!!!)

 */

#include <iostream>

class A {

};

void func(const A&)
{
    std::cout << "func(const A&)\n";
}

void func(A&&)
{
    std::cout << "func(A&&)\n";
}

int main()
{
    A ax;

    func(ax); //func(const A&)
    func(static_cast<A&&>(ax)); //func(A&&)
    func(std::move(ax)); //func(A&&) same result above function

    return 0;
}

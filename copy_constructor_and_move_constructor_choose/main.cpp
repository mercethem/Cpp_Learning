#include <iostream>

class Myclass {

};


void func(Myclass&& x)
{
    Myclass y(x); //copy constructor calls because of x is L value expr.
//    Myclass y(std::move(x)); //move constructor calls because of x is R value expr. because of move()!!!

    Myclass m;
    m = x; //copy assignment function calls
    m = std::move(x); //move assignment function calls

}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

#include <iostream>

class Myclass {
public:
    Myclass()= default;
    Myclass(const Myclass& r){
        std::cout << "copy constructor\n";
    }
    Myclass(Myclass&& r ){
        std::cout << "move constructor\n";
    }
};

void func(const Myclass& r)
{
    //..
    Myclass x(r); //for copy
}

void func(Myclass&& r)
{
    //..
    Myclass x(std::move(r)); //for stealing
}

void func2(Myclass&& x)
{
        Myclass y(x); //copy constructor calls because of x is L value expr.
//    Myclass y(std::move(x)); //move constructor calls because of x is R value expr. because of move()!!!

        Myclass m;
//        m = x; //copy assignment function calls
//        m = std::move(x); //move assignment function calls
}

int main()
{
    Myclass m;
    func(m);
    func(std::move(m));

    return 0;
}

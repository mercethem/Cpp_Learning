#include <iostream>

class A {
    friend class B; //It is mean B can access private area of A. (B can not access of A)
};

class B {

};

class Myclass {
public:
    friend int func(); //it could be private or protected area, does not matter where it is!!

private:
    int mx;

    static void foo();
};

Myclass m;

int func()
{
    m.mx = 10;
    Myclass::foo(); //this function is able to call from private area from Myclass private section
    // because of func is a friend function!!!!
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

/**

 copy elision or copy elimination was a optimisation technique in compiler until 2017
 but mandatory copy elision is a rule now

 */

#include <iostream>


class Myclass {
public:
    Myclass();

    Myclass(int x);

    ~Myclass();

    Myclass(const Myclass&);

    Myclass(Myclass&&);

};

Myclass::Myclass()
{
    std::cout << "default constructor has called\n";
}

Myclass::Myclass(int x)
{
    std::cout << "constructor has called x = " << x << "\n";
}

Myclass::~Myclass()
{
    std::cout << "destructor has called\n";
}


Myclass::Myclass(const Myclass&)
{
    std::cout << "copy constructor has called\n";
}

Myclass::Myclass(Myclass&&)
{
    std::cout << "move constructor has called\n";
}


void func(Myclass x)
{
    std::cout << "func has called\n";
}

Myclass foo()
{
    return Myclass();
}

Myclass foo2()
{

    Myclass mx;
    return mx;
}

int main()
{
    Myclass mx;
    func(mx); //Two times destructor calls because of : object of mx and parameter mx


    // ==> Mandatory copy elision
    func(Myclass()); // Only one time destructor calls because of : only there is temporary object
    //func(Myclass(10)); //same result above
    Myclass x = Myclass{ }; //same result above

    Myclass z = foo(); //==> Mandatory copy elision!!! Before 2017 ==> RVO Return value optimisation

    /**
     ATTENTION: there is move constructor there is or not for mandatory copy elision!!!

     */
    foo2(); // ==> NRVO Named return value optimisation ATTENTION : That is not mandatory copy elision

    return 0;
}


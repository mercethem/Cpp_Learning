/**
    There is no name declared anywhere but that is a object!

    A temporary object is an object that appears while a code is running and then disappears when the runtime ends
    the last point is destructor calls

    expressions of temporary objects are PR Value Expression


 */


#include <iostream>

class Myclass {
public:
    Myclass();

    Myclass(int);

    ~Myclass();

    Myclass(const Myclass&);
};

Myclass::Myclass()
{
    std::cout << "Myclass()\n";
}

Myclass::Myclass(int x)
{
    std::cout << "Myclass(int x) x = " << x << "\n";
}

Myclass::~Myclass()
{
    std::cout << "~Myclass()" << "\n";
}

Myclass::Myclass(const Myclass&)
{
    std::cout << "copy constructor()\n";
}

int main()
{
    std::cout << "main started" << "\n";

    Myclass x;// x ==> L value expression

    Myclass{ }; //Myclass{} ==> temporary object

    Myclass{ 10 }; // Myclass{ 10 } ==> temporary object

    std::cout << "main continuing" << "\n";

    return 0;
}

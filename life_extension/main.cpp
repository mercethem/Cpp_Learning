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

void func(const Myclass&);

int main()
{
    std::cout << "main started" << "\n";

    Myclass{ };

    ///Life extension
    const Myclass& lref = Myclass{ }; //If we have bind to a L value reference to temporary object then that object can not free!
    const Myclass&& rref = Myclass{ }; //If we have bind to a PR value reference to temporary object then that object can not free!

    std::cout << "main continuing" << "\n";

    getchar(); ///GETCHAR

    return 0;
}

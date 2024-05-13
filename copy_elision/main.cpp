/**

 copy elision or copy elimination was a optimisation technique in compiler until 2017
 but mandatory copy elision is a rule now

 */

#include <iostream>


class Myclass {
public:
    Myclass();

    Myclass(const Myclass&);
};

Myclass::Myclass()
{
    std::cout << "Myclass()\n";
}

Myclass::Myclass(const Myclass&)
{
    std::cout << "copy constructor()\n";
}


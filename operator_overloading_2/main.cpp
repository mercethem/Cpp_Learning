#include <iostream>
#include "m_int.h"


int main()
{
    M_int mx{ 10 }, my{ 5 }, mz{ 15 };

    std::cout << mx + my + mz << "\n";

    M_int a{ 10 };
    M_int b{ 30 };

    std::cout << ++a << "\n";
    std::cout << b++ << "\n";

    return 0;
}

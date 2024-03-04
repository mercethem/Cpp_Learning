/*

 nullptr is not a NULL because NULL is a macro but nullptr is a keyword.
 Old fashion C++ used to 0 but Modern C++ uses nullptr.

 for instance: false is a constant type of bool likewise nullptr is a constant and a keyword type of nullptr_t

*/

#include <iostream>

int main()
{

    int *p = nullptr;
    void *p2 = nullptr;

    if (p != nullptr) { //equal to if(p)
        std::cout << p << std::endl;
    }

    if (p == nullptr){ //equal to !p
        std::cout << p << std::endl;
    }

    return 0;
}

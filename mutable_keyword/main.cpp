#include <iostream>

/**
 mutable keyword generally use for SEMANTIC MEANING
 if we don't use that const member function can not change the class data member
 */

class Fighter {
public:
    int get_age() const;

    mutable int debug_call_count{ };

};

int Fighter::get_age() const
{
    ++debug_call_count; //mutable is important here because if we wouldn't use mutable keyword then result is SYNTAX ERROR
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

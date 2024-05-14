/**
 conversion constructor is not a special member function!
 ival/dval/bool_val/...etc (implicitly) ==> constructor(int) ==> temporary object
                                                                          value to class !!! ATTENTION : DANGEROUS!!!!!


 user defined conversion : There is not a rule of syntax but what if there are be some functions and if we use this functions
                            that the time user defined conversion uses

                            conversion contractor is one of them so user defined conversions
                            another an instance : type-cast is one of them so user defined conversion


 CONVERSION SEQUENCE!!!!
 CPP SYNTAX RULE : STANDARD CONVERSION and then USER DEFINED CONVERSION ==> compiler have to do that conversion list
                   USER DEFINED CONVERSION and then STANDARD CONVERSION ==> compiler have to do that conversion list



 */

#include <iostream>

class Myclass {
public:
    Myclass();

    Myclass(int);

    ~Myclass();

    Myclass& operator=(const Myclass&);
};

Myclass::Myclass()
{
    std::cout << "default constructor called this: " << this << "\n";
}

Myclass::Myclass(int x)
{
    std::cout << "constructor(int) called x = " << x << " this: " << this << "\n";
}

Myclass::~Myclass()
{
    std::cout << "destructor called this: " << this << "\n";
}

Myclass& Myclass::operator=(const Myclass&other)
{
    std::cout << "copy assignment have called this:" << this << " &other " << &other << "\n";
    return *this;
}

int main()
{
    std::cout << "main have started\n";

    int ival = 10; //double dval = 12.5
    Myclass m;

    std::cout << "main have been continuing\n";

    m = ival; //copy assignment or move assignment have called

    std::cout << "main have finished\n";

    /**
    main have started
    default constructor called this: 0x7ffdbc794852
    main have been continuing
    constructor(int) called x = 10 this: 0x7ffdbc794853
    copy assignment have called this:0x7ffdbc794852 &other 0x7ffdbc794853
    destructor called this: 0x7ffdbc794853
    main have finished
    destructor called this: 0x7ffdbc794852
     */

    return 0;
}

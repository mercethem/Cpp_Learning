#include <iostream>


class MyClass {
public:
    MyClass& func3() const;

    const MyClass& func4() const;

    const MyClass& func2();

    MyClass& func1();
};

MyClass& MyClass::func1()
{
    return *this;
    //this ===> MyClass*
}

const MyClass& MyClass::func2()
{
    return *this;
}

MyClass& MyClass::func3() const
{
    //return *this; //SYNTAX ERROR because MyClass* ===> const MyClass* return non-const
    //this ===> const MyClass*
}

const MyClass& MyClass::func4() const
{
    return *this;
}


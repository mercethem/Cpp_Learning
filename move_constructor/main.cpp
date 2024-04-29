#include <iostream>

class MyClass{
public:
    MyClass(const MyClass&other);   //copy constructor copy source
    MyClass(MyClass&&other);        //move constructor steal source for blocking unnecessary copy
    ///copy constructor can take L value and R value expression because of const class& but move constructor just take
    ///R value expression so move constructor blocs unnecessary copy when just copy constructor created without move constructor
    ///because of function overloading rules!!!
};
int main()
{
    return 0;
}

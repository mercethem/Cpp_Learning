#include <iostream>

/**
 We can not change non-static data members of objects
 */

class MyClass {
public:
    void print(int) const;    //===> Accesser/getter function
    //void print(int, const MyClass*); there is invisible parameter

    void func();           //===> Mutatar/setter function
    //void func(MyClass*); there is invisible parameter
    int x;
private:
    int y;
};

void MyClass::print(int) const
{
    MyClass myClass;
    myClass.y = 10; //ATTENTION: That is a const member function but myClass is different from MyClass
    //MyClass::y = 20; SYNTAX ERROR BECAUSE CONST MEMBERS CAN NOT CHANGE

}

void MyClass::func()
{

}

int main()
{


    return 0;
}

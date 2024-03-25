#include <iostream>

/**
 We can not change non-static data members of objects

 What is the const member function ? The answer is this function do not change to the object!
 Result ===> The important thing is only object not members!!!!!!
 And how can i understand which function will be const ? About PROBLEM DOMAIN!

 */

class MyClass {
public:
    void print(int) const;    //===> Accesser/getter function
    //void print(int, const MyClass*); there is invisible parameter
    void foo()const;
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
    foo();
}

void MyClass::foo()const
{
    //func(); //SYNTAX ERROR because we can not call a non-const function in const function
}

int main()
{


    return 0;
}

#include <iostream>

class MyClass { //taken from howard hinnant
public:
//    MyClass();
//
//    MyClass() = default;
//
//    MyClass() = delete;
    /**
     this deleted scenario is when we are use something in class but when compiler create a constructor then that situation
     is a syntax error result is compiler delete that constructor!

     instance below

     */
};

class MyClass2 {

private:
    const int x;
};

int main()
{
    MyClass2 mx;
    //Syntax error :  ‘MyClass2::MyClass2()’ is implicitly deleted because the default definition would be ill-formed
    //ERROR NOTE : call to implicitly-deleted default  constructor  of 'MyClass2'


}

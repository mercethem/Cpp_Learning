#include <iostream>


/**
 Scope category in C++

 namespace scope
 block scope
 class scope
 function scope
 function prototype scope

/**

 class specifiers : data members, member functions(methods), member type-type member-nested type

 class MyClass{
    (declarative region)
    class members stay here!
 };

 Data members:
        1) non-static data members ===> static int x;
        2) static data members     ===> int x;  //that as like as in C

 Variables calls    INSTANCE / OBJECT / CLASS OBJECT    in object oriented

 int x;     ===> initialize
 MyClass y; ===> instantiate


-----------------------------------------------------------------------------------------------------------------------
 class Data{
 //That is an empty class and sizeof of empty class is 1 Byte
 };

-----------------------------------------------------------------------------------------------------------------------
 Access specifiers in class members
 ----------------------------------
 public members : all users can use it
 private members : class users can use it
 protected members : inherited class users can use it

 ATTENTION : there are not scope the access modifiers!!!

 class MyClass{
 int t; //private data member of the class!!!!   ((IF WE USE ===> struct MyStruct{ int t; }; t is a public data member))
-----------------------------------------------------------------------------------------------------------------------
 public:
    int x; //public data member of the class
    void func(int); //public member function of the class      ===> public area of MyClass

 private:
    int y; //private data member of the class
    void func2(int);//private member function of the class     ===> private area of MyClass
    typedef int Word; //private type member of the class

 protected:
    int z; //protected data member of the class
    void func3(int);//public member function of the class      ===> protected area of MyClass

 };

------------------------------------------------------------------------------------------------------------------------
 class MyClass{
    void func(int);
    void func(int);//That is not a redeclaration that is SYNTAX ERROR because we can not use redeclaration in classes!!!
                   //But we can use overloading in classes
 };


 -----------------------------------------------------------------------------------------------------------------------

 void foo(int x); ===> There is a parameter variable that is only int

 //About nonstatic member function
 class MyClass{
 public:
    void func(int x); ===> There are two parameter variable these are int and MyClass* p  !!!
 private:
    int a, b, c;
 };

 void func(int x); equal to ===> void func(MyClass* p, int x);

 int main()
 {
 MyClass myclass;
 myclass.func();

 }

 -----------------------------------------------------------------------------------------------------------------------

*/

void func(int, int); //global function - free function - stand-alone function ===> using style like as C

class Data {
    int x, y; //sizeof ===> 4 + 4
    void func(int, int); //member function ===> totally specific about C++
};

int main()
{
    std::cout << sizeof(Data) << "\n";

    Data mydata;
    //mydata.x; //access control error!!! NOT a name-lookup error

}
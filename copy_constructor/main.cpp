#include <iostream>
/**
 Copy Constructor (cc)
 - public of class
 - non-static of class          ===> If compiler writes (defaulted by compiler) copy constructor!
 - inline function of class
 When a class object initialized from another a class object then default constructor does not work COPY CONSTRUCTOR works

 ATTENTION: COPY CONSTRUCTOR always be in all classes, you write or compiler writes(implicitly declared)!
            If there is not a specific situation you should not write yourself to copy constructor
            So let's compiler does it



 class MyClass{
 public:
    MyClass (const MyClass &other) : ax {other.ax}, bx {other.bx}, cx {other.cx}
    {

    }
 private:                                   ===> Copy constructor style that Writen by compiler
    T1 ax;
    T2 bx;
    T3 cx;
 };



 */
class MyClass {
public:
    MyClass();

    ~MyClass();
    int a;
    int b;
};

MyClass::MyClass()
{
    std::cout << "MyClass default constructor called this : " << this << "\n";
}

MyClass::~MyClass()
{
    std::cout << "MyClass destructor called this : " << this << "\n";
}


void func(MyClass);
MyClass func2();

int main()
{
    MyClass class1;
    MyClass class2 = class1;
    std::cout << class1.a << "\n";
    std::cout << class2.a << "\n";
    /*
    MyClass class2 = class1;
    MyClass class2(class1);
    MyClass class2{class1};
    auto class2 = class1;       ===> These are same call techniques and uses COPY CONSTRUCTOR
    auto class2(class1);
    auto class2{class1};
     */

//    func(class1); //            ===> COPY CONSTRUCTOR creates for function
//    func2(); //                 ===> COPY CONSTRUCTOR creates for function

    return 0;
}

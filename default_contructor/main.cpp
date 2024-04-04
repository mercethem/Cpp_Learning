/**
  we was wrote default constructor by compiler to :
  1) non-static of class
  2) inline
  3) public
  4) data members initialized with default values
 */

#include <iostream>

class MyClass2 {
public:
    MyClass2() = default; //default constructor ===> compiler write constructor's code (public or private doesn't matter)
};


class MyClass {
public:
    void print() const;

private:
    int x, y, z;
};

void MyClass::print() const
{
    std::cout << x << y << z << "\n";
}

int main()
{
    MyClass x; //default constructor has initialized with  undetermined values
    /**
     ATTENTION: IF WE WRITE OURSELF THE DEFAULT CONSTRUCTOR INSIDE CLASS THEN OUR CONSTRUCTOR DO NOT INITIALIZE ANY VARIABLES
     THEY STILL UNDETERMINED VALUE
     */

    MyClass x2{}; //default constructor has initialized with value initialize. The values are 0 because they are primitive types

    x.print();
    x2.print();


}
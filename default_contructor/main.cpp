/**
  we was wrote default constructor by compiler to :
  1) non-static of class
  2) inline
  3) public
  4) data members initialized with default values
 */

class MyClass{
public:
    MyClass() = default; //default constructor ===> compiler write constructor's code (public or private doesn't matter)
};

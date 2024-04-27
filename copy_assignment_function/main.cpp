/**
 copy assignment functions is a special member function

 MyClass a, b;
 a = b;                     ===> copy assignment function!
 a.operator(b); //same above

 Written by Compiler (Defaulted by compiler) copy assignment function
 - public
 - non-static
 - inline

 class MyClass;
 MyClass& operator=(const MyClass &other); //That is not only one way to write copy assignment but that is traditional way
 */

#include <iostream>
#include <cstring>


class MyClass {
public:
    MyClass(const char * p); //constructor
    ~MyClass(); //destructor
    MyClass(const MyClass& other) : ax{ other.ax }, bx{ other.bx }; //copy constructor (if we create and new memory allocated
                                                        // then that is deep copy
    MyClass& operator=(const MyClass& other) //copy assignment function (compiler write like that)
    {
        free(mp);
        mlen = other.mlen;
        mp = static_cast<char *>(malloc(mlen + 1));
        if (!mp) {
            exit(EXIT_FAILURE);
        }
        strcpy(mp,other.mp);

        return *this;
    }

private:
    char * mp;
    int mlen;
};


int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

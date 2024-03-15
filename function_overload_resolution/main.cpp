/**

 FUNCTION OVERLOAD RESOLUTION
    1) valid
    2) invalid
        a) no match (there are overloading but all overloads not a match for function call)
                    void func(long double);                     int main()
                    void func(int);                 ===>        { func(nullptr); or func(1, 3);
                    void func(char);                            }

        b) ambiguity(ambiguous)


 !!!STEPS!!!
 1) candidate functions ===> compiler looks and saves to names of overloading
 2) viable function     ===> You function calls ownself is that valid???? (Doesn't matter narrowing conversion!!!!!)
                    Yes ===> viable function
                    No  ===> not a viable function
    RULES : a) Declaration of function operands are compatible
            b) All arguments to any parameters can be valid conversion in Syntax Rules
 3) choose one of them that in list of viable functions (best viable/best match)
       or SYNTAX ERROR (ambiguity)!!!!!!!!!!!!
------------------------------------------------------------------------------------------------------------------------
 argument / actual parameter : operands

 conversion : argument to parameter
    1) variadic conversion (the worst that is)
    2) user define conversion
    3) standard conversion

 */
#include <iostream>

int main()
{
    {

        void func(long double);
        void func(char);
        void func(int, int);
        void func(int *);

        //func calls to candidate functions
    }

    {
        void func(long double);
        void func(char);
        //func(21); // long double and char is viable for that function call

        void func(int *);      // 1
        void func(void *);     // 2
        void func(nullptr_t);  // 3

        func(malloc(1000));
        //not viable for 1 (there isn't implicit conversion void* to int*)
        //Viable for 2
        //Viable for 3 (there isn't implicit conversion void* to nullptr)
    }

    {
        enum Color {
            White, Yelllow, Gray, Pink, Red, Brown, Magenta, Purple, Blue, Black
        };
        void func(int);   //1
        void func(Color); //2

        func(White); //viable for BOTH because there is implicit conversion traditional enum to int
    }

    {
        enum class Color {
            White, Yelllow, Gray, Pink, Red, Brown, Magenta, Purple, Blue, Black
        };
        void func(int);   //1
        void func(Color); //2

        func(Color::White); //viable for 2 because there is NOT implicit conversion scoped enum to int
    }

    {
        void func(bool);   //1
        void func(void *); //2

        int x{ };
        func(&x); //viable for 2 because there is implicit conversion address to bool and int* to void*
    }

    { //variadic conversion (the worst that is) for conversion
        void func(...);
        void func(void *);

        int x{ };
        func(&x);
    }

    { //user define conversion
        struct Data {
            int x;

        };
        //Data myData = 10; //Syntax error because there is no conversion int to Data
    }

    { //user define conversion
        struct Data {
            int x;

            Data(int);
        };

        Data myData(20); //NOT Syntax error because there is a function Data named. There is user define conversion
        myData = 10;
    }

    {//user define conversion
        struct A {

        };

        A ax;
        int ival = ax; //SYNTAX ERROR initializing can not convert from A to int
    }
    {//user define conversion
        struct A {
            operator int() const;
        };

        A ax;
        int ival = ax; //NOT syntax error (user defined conversion)
    }

}
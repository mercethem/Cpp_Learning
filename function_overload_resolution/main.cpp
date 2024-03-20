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


     RULE : If there are much more viable and standard conversion what will we do ???
         1) exact match (argument type and parameter type are totally same)
                - conversion with array decay
                - const conversion (for instance  int*  ===> const int*)
                - function to pointer conversion

         2) promotion
                -integral promotion
                    char ===> int
                    unsigned char ===> int
                    signed char ===> int
                    short ===> int
                    unsigned short ===> int
                    bool ===> int
                    float ===> double!!!!!!!!!!!!!!!!!!!

                    float ===> long double NOT PROMOTION that are conversion
                    double ===> long double NOT PROMOTION that are conversion

                -
         3) conversion
            if there are much conversion then be a ambiguity
                float ===> long double
                double ===> long double
            signed and unsigned types in same data type is conversion


         ATTENTION : 1 > 2 > 3

         if there are more conversion that is ambiguity

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
//        void func(int);   //1
//        void func(Color); //2
//
//        func(White); //viable for BOTH because there is implicit conversion traditional enum to int
    }

    {
        enum class Color {
            White, Yelllow, Gray, Pink, Red, Brown, Magenta, Purple, Blue, Black
        };
//        void func(int);   //1
//        void func(Color); //2
//
//        func(Color::White); //viable for 2 because there is NOT implicit conversion scoped enum to int
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
//        int ival = ax; //SYNTAX ERROR initializing can not convert from A to int
    }
    {//user define conversion
        struct A {
            operator int() const;
        };

        A ax;
        int ival = ax; //NOT syntax error (user defined conversion)
    }

    {//standart conversion have narrowing conversion for instance long double to char!!! (narrowing conversion and UB but there is)
        void func(long double); //overload and viable and standard conversion
        void func(char); ////overload to and viable to and standard conversion to
        void func(int *);
        //The question is how can we choose right declaration for the below function
        // func(2.3);

        /**

         RULE : If there are much more viable and standard conversion what will we do ???
         1) exact match (argument type and parameter type are totally same)
                - conversion with array decay
                - const conversion (for instance  int*  ===> const int*)
                - function to pointer conversion

         2) promotion

         3) conversion
            if there are much conversion then be a ambiguity


         ATTENTION : 1 > 2 > 3

         */
        func(2.3L); //exact match
        func('A'); //exact match

        int a[]{ 1, 2, 3 };
        func(a); // &int[0]; //exact match with array decay


        void func(const int *);
        int x{ 12 };
        func(&x); //int*  ===> const int* but const int* to int* is not viable!!!!


        void func(int (*)(int));
        int foo(int);
        func(foo);
        func(&foo); // equal to above function


        void func(long double);
        void func(char);
//        func(2.3); //data type of 2.3 is double so two conversion and result is ambiguity

        {
            void func(unsigned int);
            void func(double);
//             func(12); //ambiguity ===> int to unsigned int conversion and int to double is conversion and
            //much more conversion and result is ambiguity
            func(1.2f); //1.2f is float, float to unsigned int is conversion but float to double conversion is promotion
        }

        {
            void func(int);
            void func(double);
            func(10 >
                 5); //exact match because bool to int is promotion but bool to double is conversion so promotion wins
            func('A'); //char to int is promotion char to double is conversion so promotion wins
        }
        {
            void func(int);
            void func(double);
            void func(long);

            //func(2ul); //unsigned long to int conversion, unsigned long to double is conversion, unsigned long to long conversion
            //so much more conversion and result is ambiguity
        }
        {
            void func(int, int = 20);
            void func(int);

//            func(20); // ambiguity
        }
    }


}
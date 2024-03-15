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
 3)

 */
#include <iostream>

int main ()
{
    {

        void func (long double);
        void func (char);
        void func (int, int);
        void func (int *);

        //func calls to candidate functions
    }

    {
        void func (long double);
        void func (char);
        //func(21); // long double and char is viable for that function call

        void func (int *);      // 1
        void func (void *);     // 2
        void func (nullptr_t);  // 3

        func (malloc (1000));
        //not viable for 1 (there isn't implicit conversion void* to int*)
        //Viable for 2
        //Viable for 3 (there isn't implicit conversion void* to nullptr)
    }

    {
        enum Color
        {
            White, Yelllow, Gray, Pink, Red, Brown, Magenta, Purple, Blue, Black
        };
        void func (int);
        void func (Color);

        func (White); //viable for BOTH because there is implicit conversion enum to int
    }


};
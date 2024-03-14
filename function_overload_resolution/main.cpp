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
 1) candidate functions ===> look and save names of overloadings
 */


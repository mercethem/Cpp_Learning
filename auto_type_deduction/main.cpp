struct Data
{

};

/*

 With auto to easy to programming

 auto keyword is different from C
 C   ===> automatic storage duration
 C++ ===> type deduction (placeholder)

 -Invalid default initialization
 -auto isn't about run-time only compile-time

  */

const char *foo (const char *, const char *);

Data func ();

int func2 (int);

int main ()
{

    //Easy to use
    const char *(*fp) (const char *, const char *) = &foo; //EASY WAY TO PROGRAMMING, SAFE AND EFFICIENT!!!
    auto fp2 = &foo; //equal to above


    {
        //Data types
        auto val0 = 'c'; //auto equal to char
        auto val1 = 10; //auto equal to int
        auto val2 = 10u; //auto equal unsigned int
        auto val3 = 10.0f; //auto equal to float
        auto val4 = 1.1; //auto equal to double
        auto val5 = "data"; //auto equal to const char*
        auto val6 = ""; //auto equal to const char*
        auto val7 = func ();//auto equal to Data
    }

    { ///array decay
        int array[10]{ };
        auto arr = array; //array decay valid. Data type of arr is int* so &a[0] - address of fist value of array!
    }

    { ///array decay valid const
        const int array[] = { 1, 2, 3, 4, 5 };
        auto arr = array; //array decay valid. Data type of arr is const int* so &a[0] - address of fist value of array!
    }

    { ///invalid const
        //ATTENTIO: 2 lines below codes importand because auto is not const int only int!!!
        const int x = 10;
        auto y = x; ///Data type of y is int!!!! Invalid const

    }

    { ///invalid &
        int x = 10;
        int &r = x;
        auto y = r; ///Data type of y is only int!!!! Invalid reference "&"
    }

    { ///invalid & and const
        int x = 10;
        const int &r = x;
        auto y = r; ///Data type of y is only int!!!! Invalid const
    }

    {///function pointer
        auto f = func2; //function to pointer conversion
        int (*f2) (int) = func2; //same as above
    }

    ///-----------------------------------------------------------------------------------------------------------------

    {
        int x = 10;
        auto &r = x; // auto is int but data type of r is int&
        //auto &r = 10; SYNTAX ERROR because 10 is PR value expression but r is L value reference
    }

    {///valid const because not just r it is &r!!!!!(There is reference declarator)
        const int x = 10;
        auto &r = x; //Data type of r is const int& and data type of auto is const int
        //Let's assume r is not const int& just int& at result there is not const int to int& conversion!!!!!
    }

    {///reference to array
        int a[]{ 1, 2, 3, 4, 5 };
        auto &x = a; //Data type of auto is int[5] but Data type of x is int&[5]
        int(&y)[5] = a; //equal to as above
    }

    {///reference to const array
        const int a[]{ 1, 2, 3, 4, 5 };
        auto &x = a; //Data type of auto is const int[5] but Data type of x is const int&[5]
        const int(&y)[5] = a; //equal to as above
    }

    {
        auto &x = "hello"; //Data type of x is const char (&)[6]
        const char (&y)[6] = "hello"; //Equal to as above
    }

    {///function reference and function pointer!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        int func (int);
        auto &r = func; //Data type of r is int (&)(int)


        int (*function_pointer) (int) = &func; //Function pointer


        int (&functoin_reference) (int) = func; //Function reference
        auto &funcion_reference = func; //Equal to as above

    }

    ///-----------------------------------------------------------------------------------------------------------------

    // &&  ===> forwarding reference

    ///ATTENTON BELOW : WRONGGGGG (& is for L val ref and && is for R value ref) for instance is below scope
    {
        int x{ };
        auto &&r = x; //
    }

    //if you use && (forwarding reference) with auto and Data type of the auto is it depends on Data type of initializer


    return 0;
}

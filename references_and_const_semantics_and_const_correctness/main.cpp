/*

 mutator, setter, set function
 void func(T *ptr); equal to ===> void func(T &r)        //out parameter

 accessor, getter, get function
 void foo(const T* ptr); equal to ===> void func(const T &r)

 if you want to use getter function do not use void func(T* p)!!!!
 for instance ===>  void print_array(const int* ptr, size_t size); //THAT IS TRUE THAT IS GETTER
                    void print_array(int* ptr, size_t size); //THAT IS FALSEEEEEEEEEEEEEE THAT IS NOT SETTER!!!

 ATTENTION: Do not forget all references is top level const!!!

 */

#include <iostream>


void func(int (&r)[5])
{

}

int main()
{
    int x = 10;
    int y = 20;

    int *const p = &x; //p is const pointer (top level const)  address is can not changeable
    const int *p2 = &y; //p2 is pointer to const int (low level const) value is can not changeable

    int a[5] = {1, 2, 3, 4, 5};
    int b[6] = {};
    //declaration of *ptr is  array of a !
    // FALSE ===> int* ptr = a;
    // TRUE ===>  int (*ptr)[5] = &a;
    int (*ptr)[5] = &a; // ===> *ptr equal to array of a !!!!

    (*ptr)[3] = 10;
    printf("%d", (*ptr)[3]);

    printf("\n");

    for (int i = 0; i < 5; ++i) {
        std::cout << (*ptr)[i] << " ";
    }

    printf("\n");

    int (&reference_array)[5] = a;

    for (int i = 0; i < 5; ++i) {
        std::cout << reference_array[i] << " ";
    }

    printf("\n");

    for (int i = 0; i < 5; ++i) {
        std::cout << ++reference_array[i] << " ";
    }

    int *ptr2 = a; //array decay
    int *ptr3 = reference_array; //array decay

    func(a); //you only call with array has 5 elements
    //func(b); //SYNTAX ERROR because array b has got 6 elements
    return 0;
}

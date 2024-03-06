#include <iostream>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int (&r)[5] = a; //reference of array
    int (*p)[5] = &a; //pointer of array

    int *ptr = a; //array decay (array to pointer conversion)
    int *ptr2 = &a[0]; //same thing as above
    //ATTENTION: Array decay do not use in operand of sizeof operator, operand of address operator "&";

    for (int i = 0; i < 5; ++i)
        std::cout << r[i] << " ";

    std::cout << "\n";

    for (int i: r) //same as above loop
        std::cout << i << " ";

    std::cout << "\n";

    for (int i: *p) //same as above loop
        std::cout << i << " ";

    return 0;
}

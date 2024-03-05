#include <iostream>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int(&r)[5] = a;

    for(int i = 0; i < 5; ++i)
        std::cout << r[i] << " ";

    std::cout << "\n";

    for (int i : r) //same as above loop
        std::cout << i << " ";

    return 0;
}

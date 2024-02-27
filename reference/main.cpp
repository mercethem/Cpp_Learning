/**
 addresses of k and r or x and r are same. r is a ref(reference is like a pointer but just easier to writer than pointer)
 */
#include <iostream>

void foo(int &r)
{
    std::cout << "&r = " << &r << "\n";
}

int main() {

    int k = 10;
    foo(k);
    std::cout << "&k = " << &k << "\n";


    printf("\n");
    int x = 20;
    int& r = x;

    std::cout << "&r = " << &r << "\n";
    std::cout << "&x = " << &x << "\n";

    return 0;
}

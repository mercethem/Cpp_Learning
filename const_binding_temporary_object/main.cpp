#include <iostream>

/*

ATTENTION!!!!
If you use const object then compiler create a temporary object(temp_val_type is our_reference_type) and binding
const object and the temporary object

*/
int main()
{
    unsigned long x = 10;
    const long &r1 = x;
    const int &r2 = x;

    ++x;

    std::cout << "r1 = " << r1 << "\n"; //10
    std::cout << "r2 = " << r2 << "\n"; //10

    double dval = 1.2;
    const int &r3 = dval;
     /*
     int temp_val{dval};
     const int &r3 = temp_val;
     */

    const int &r4 = 10;
     /*
     int temp_val{10};
     const int &r4 = temp_val;
     */

    return 0;
}

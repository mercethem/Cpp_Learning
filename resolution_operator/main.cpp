#include <iostream>

int x{ 10 };

class Data {
    int x = 20;
};

int main()
{
    int x = 30;
    // ::x ===> 10 - Compiler name-lookup in namespace
    // Data:: 20 ===> Compiler name-lookup in Data class
    // x  //30 ===> Compiler name-lookup in this scope

    //above instances for name-lookup
    return 0;
}

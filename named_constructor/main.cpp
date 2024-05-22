/**
 in this situation constructors in private (normally situation they will be public) and public static functions call
 the constructor
 */

#include <iostream>

class Myclass {
private:
    Myclass(double, double, int); //int is a dummy variable in here

    Myclass(double, double);

public:
    static Myclass func1(double x, double y)
    {
        return Myclass{ x, y };
    }

    static Myclass func2(double k, double l)
    {
        return Myclass{ k, l, 0 }; //'0' is the dummy value in here
    }
};

int main()
{

    auto instance1 = Myclass::func1(1.0, 2.0);
    auto instance2 = Myclass::func2(1.0, 2.0);

    return 0;
}

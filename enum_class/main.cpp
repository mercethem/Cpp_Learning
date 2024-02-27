#include <iostream>


enum class ScreenColor : int // "int" is underline type
{
    White, Red, Brown, Magenta, Black
};

enum class TrafficColor
{
    Yellow, Green, Red
};

enum ScreenColor2
{
    White, Red, Brown, Magenta, Black
};

int main()
{
    using ScreenColor::White; //C++ 20

    ScreenColor color = ScreenColor::White;
    TrafficColor light = TrafficColor::Red;

    ScreenColor::White; //We can use Scope Resolution Operator /* :: */ can usable in traditional C++

    return 0;
}

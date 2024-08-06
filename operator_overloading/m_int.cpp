#include "m_int.h"
#include <iostream>
#include <istream>

std::ostream& operator<<(std::ostream& os, const M_int& m)
{
    return os << "(" << m.mval << ")";
}

std::istream& operator>>(std::istream& is, M_int& m) //That implementation is not correct because
// there is not exception handling for that function
{
    return is >> m.mval;
}

bool operator<(const M_int& x, const M_int& y)
{
    return x.mval < y.mval;
}

bool operator==(const M_int& x, const M_int& y)
{
    return x.mval == y.mval;
}


//
// Created by asus on 06.08.2024.
//

#ifndef OPERATOR_OVERLOADING_M_INT_H
#define OPERATOR_OVERLOADING_M_INT_H

#include <iosfwd> //include input output declarations, lighter than iostream
#include <stdexcept>

class M_int {
public:
    explicit M_int(int x = 0) : mval{ x }
    {
    };

    // explicit constructor automatic conversion off and copy initialize objects off
    // (only one operand constructors)
    friend std::ostream& operator<<(std::ostream& os, const M_int& m); //inserter (cout << x;)

    friend std::istream& operator>>(std::istream& is, M_int& m);//extracter (cin >> x;)

    friend bool operator<(const M_int& x, const M_int& y);

    friend bool operator==(const M_int& x, const M_int& y);

    M_int& operator+=(const M_int& r)
    {
        mval += r.mval;

        return *this;
    }

    M_int& operator-=(const M_int& r)
    {
        mval -= r.mval;

        return *this;
    }

    M_int& operator*=(const M_int& r)
    {
        mval *= r.mval;

        return *this;
    }

    M_int& operator/=(const M_int& r)
    {
        if (r.mval == 0) {
            throw std::runtime_error("Divide by Zero ERROR!\n");
        }
        mval /= r.mval;

        return *this;
    }

    M_int operator+() const
    {
        return *this;
    }

    M_int operator-() const
    {
        return M_int{ -mval };
    }

    M_int& operator++()
    { //prefix
        ++mval;

        return *this;
    }

    M_int operator++(int)
    {//postfix int is dummy here for overloading
        M_int temp{ *this };

        ++*this;

        return temp;
    }

    M_int& operator--()
    { //prefix
        --mval;

        return *this;
    }

    M_int operator--(int)
    {//postfix int is dummy here for overloading
        M_int temp{ *this };

        --*this;

        return temp;
    }


private:
    int mval;
};

inline bool operator>(const M_int& x, const M_int& y)
{
    return ( y < x );
}

inline bool operator>=(const M_int& x, const M_int& y)
{
    return !( x < y );
}

inline bool operator<=(const M_int& x, const M_int& y)
{
    return !( y < x );
}


inline bool operator!=(const M_int& x, const M_int& y)
{
    return !( y == x );
}

//first convention (CHOOSEN HARD!)
//inline M_int operator+(const M_int& left, const M_int& right)
//{
//    M_int temp{ left };
//
//    temp += right;
//
//    return temp;
//}


//second convention (CHOOSEN EASY!) (CHOOSE THAT ONE)
//inline second operator+(const M_int& left, const M_int& right)
//{
//    return M_int{left} += right;
//}

//third convention (CHOOSEN EASY_2!)  (CHOOSE THAT ONE)!!!!!
inline M_int operator+(M_int left, const M_int& right)
{
    return left += right;
}

inline M_int operator-(M_int left, const M_int& right)
{
    return left -= right;
}

inline M_int operator*(M_int left, const M_int& right)
{
    return left *= right;
}

inline M_int operator/(M_int left, const M_int& right)
{
    return left /= right;
}


#endif //OPERATOR_OVERLOADING_M_INT_H

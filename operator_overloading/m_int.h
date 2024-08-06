//
// Created by asus on 06.08.2024.
//

#ifndef OPERATOR_OVERLOADING_M_INT_H
#define OPERATOR_OVERLOADING_M_INT_H

#include <iosfwd> //include input output declarations, lighter than iostream

class M_int {
public:
    explicit M_int(int x = 0) : mval{ x }
    {
    };
    // explicit constructor automatic conversion off and copy initialize objects off
    // (only one operand constructors)
    friend std::ostream& operator<<(std::ostream& os, const M_int& m); //inserter (cout << x;)
    friend std::istream& operator>>(std::istream& is, M_int& m);//extracter (cin >> x;)


private:
    int mval;

};


#endif //OPERATOR_OVERLOADING_M_INT_H

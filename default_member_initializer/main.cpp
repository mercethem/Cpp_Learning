#include <iostream>

/**
  default member initializer/in-class initializer


 ATTENTION = ODR(One Definition Rule) ===> If we define twice or more a function, class etc. that is UNDEFINED BEHAVIOR
                                           EXCEPT ===> CLASSES IF TOKEN BY TOKEN CAME FROM MUCH MORE SOURCE FILES
                                                       INLINE FUNCTIONS
                                                       INLINE VARIABLES
 */

class Myclass {
public:
    void print() const;

private:
    int m_a;
    int m_b;
    int m_x{ 10 };
    int m_y = 10;
    //int m_z(10); SYNTAX ERROR
    /**
     That means we says to compiler "do not initialize default constructor members, use my values!"
     */
};

void Myclass::print() const
{
    std::cout << "m_a = " << m_a << "      m_b = " << m_b << "      m_x = " << m_x << "     m_y = " << m_y << "\n";
}

int main()
{
    Myclass mine;
    mine.print();
    return 0;
}

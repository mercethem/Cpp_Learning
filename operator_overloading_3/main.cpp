//[] overloading

#include <iostream>

class Array {
public:
    explicit Array(size_t n) : msize{ n }, mp{ new int[msize] }
    {
    };

    ~Array() //be careful i have to write copy constructor and copy assignment (that situation UB do not use that code!)
    {
        delete[]mp;
    }


    size_t size() const
    {
        return msize;
    };

    int& operator[](size_t idx)
    {
        return mp[ idx ];
    }

    const int& operator[](size_t idx) const
    {
        return mp[ idx ];
    }

    friend std::ostream& operator<<(std::ostream& os, const Array& a)
    {
        for (size_t i = 0; i < a.size() - 1; ++i) {
            os << a[ i ] << ", ";
        }
        return os << a[ a.size() - 1 ];
    }

private:
    size_t msize;
    int* mp;
};

int main()
{
    Array a(10);
    std::cout << a.size() << "\n";

    for (size_t i{ 0 }; i < a.size(); ++i) {
        a[ i ] = i;
    }

    std::cout << a;

    return 0;
}

/**
    Type conversion and type-cast are different each other

    Type conversion is generally meaning of approach
        -implicit type conversion (automatic)
        -explicit type conversion (type-cast)

    Attention: compiler creates a temporary object when explicit type conversion does, because of type-cast

    (target type) expression ===> (double) int ...   ===> C Style cast (modern C++ does not want to use this cast type)
                                                          because WE HAVE NEW ONES! :)

    C++ Casting Tools
    - static_cast
    - const_cast
    - reinterpret_cast (the most risky one)
    - dynamic_cast

    static cast
    -----------
    static_cast<target type> (operand) ===> static_cast<int>(dval)
    const_cast<int *>(ptr)

    static_cast                     ===> int to double, int to enum or enum to int,
    reinterpret_cast                ===> casting with addresses, for instance int* to double*, void* to T*
    const_cast                      ===> const T* to T* or T* to const T*
                static_cast/reinterpret_cast    ===> void* to T*
    















 */
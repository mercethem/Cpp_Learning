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

 */
///non copyable but movable class idiom
class Myclass2{
public:
    Myclass2& operator=(const Myclass2&) = delete;
    Myclass2 (const Myclass2&) = delete;
    Myclass2(Myclass2&&);
    Myclass2& operator = (Myclass2&&);
};
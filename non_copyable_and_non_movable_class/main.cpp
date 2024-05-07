///non copyable and non movable class idiom
class Myclass{
public:
    Myclass& operator=(const Myclass&) = delete;
    Myclass (const Myclass&) = delete;
};


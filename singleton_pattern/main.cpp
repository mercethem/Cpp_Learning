/**
 Singleton pattern some people say actually anti-pattern some people think not a anti-pattern!
 If we need only one object and not much more, our pattern is singleton pattern!

 below codes are not about multithreading just basic and fundamental
 */

#include <iostream>

class Singleton {
public:
    Singleton(const Singleton&) = delete; //copy constructor deleted

    Singleton& operator=(const Singleton&) = delete; //copy assignment deleted

    ~Singleton()
    {
        delete mp;
    }

    static Singleton& get_instance()
    {
        if (!mp) {
            mp = new Singleton();
        }
        return *mp;
    }

    void func();

    void foo();

private:
    Singleton();

    inline static Singleton* mp = nullptr;
};

int main()
{
    Singleton::get_instance().func();
    return 0;
}

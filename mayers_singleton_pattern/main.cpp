/**
 Scott mayers' singleton code
 */

#include <iostream>

class Singleton {
public:
    Singleton(const Singleton&) = delete; //copy constructor deleted

    Singleton& operator=(const Singleton&) = delete; //copy assignment deleted


    static Singleton& get_instance()
    {
        static Singleton instance;

        return instance;
    }

    void func();

    void foo();

private:
    Singleton();

};

int main()
{
    Singleton::get_instance().func();
    return 0;
}

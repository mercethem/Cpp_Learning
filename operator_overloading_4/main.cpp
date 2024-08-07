//-> overloading (becarefull -> operator is binary operator but the operator unary-like overloads)

#include <iostream>

class ResourceUser {
public:

    ResourceUser()
    {
        std::cout << "Constructor of ResourceUser has used resource.\n";
    }

    ~ResourceUser()
    {
        std::cout << "Destructor of ResourceUser has given source back.\n";
    }

    void func()
    {
        std::cout << "ResouurceUser::func()\n";
    }

    void foo()
    {
        std::cout << "ResouurceUser::foo()\n";
    }

};

void gf(ResourceUser&)
{
    std::cout << "gf()\n";
}

//smart pointer class
class SmartPtr {
public:
    SmartPtr() : mp{ nullptr }
    {
    };

    SmartPtr(ResourceUser* p) : mp{ p }
    {
    };

    SmartPtr(const SmartPtr&) = delete;

    SmartPtr& operator=(const SmartPtr&) = delete;

    SmartPtr(SmartPtr&& other) : mp{ other.mp }
    {
        other.mp = nullptr;
    }

    SmartPtr operator=(SmartPtr&& other);

    ~SmartPtr()
    {
        if (mp) {
            delete mp;
        }
    }

    ResourceUser& operator*()
    {
        return *mp;
    }

    ResourceUser* operator->()
    {
        return mp;
    }

private:
    ResourceUser* mp;
};


int main()
{
    {
        SmartPtr p = new ResourceUser;

        p->foo();

        p->func();

        gf(*p);
    }
    std::cout << "main continuing.\n";

    return 0;
}

#ifndef SPECIAL_FUNCTION_MEMBERS_SPECIAL_MEMBER_FUNCTIONS_H
#define SPECIAL_FUNCTION_MEMBERS_SPECIAL_MEMBER_FUNCTIONS_H


#include <cstdio>

class Sentence {
public:
    Sentence(); //default constructor
    Sentence(const char * p); //constructor
    Sentence(const Sentence&); //copy constructor
    Sentence(Sentence&&); //move constructor

    Sentence& operator=(const Sentence&); //copy assignment
    Sentence& operator=(Sentence&&); //move assignment

    ~Sentence(); //destructor

    void print() const;

    int length() const
    {
        return mlen;
    }

private:
    char * mp;
    std::size_t mlen;
};


#endif //SPECIAL_FUNCTION_MEMBERS_SPECIAL_MEMBER_FUNCTIONS_H

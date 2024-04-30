//
// Created by asus on 29.04.2024.
//

#include "special_member_functions.h"
#include <cstring>
#include <cstdlib>
#include <iostream>

Sentence::Sentence(const char* p) : mlen{ strlen(p) } //constructor
{
    mp = static_cast<char*>(malloc(mlen + 1)); //+1 for \0
    if (!mp) {
        std::cout << "out of memory\n";
        exit(EXIT_FAILURE);
    }
    strcpy(mp, p);
}

Sentence::Sentence(const Sentence& other) : mlen(other.mlen) //copy constructor
{
    mp = static_cast<char*>(malloc(mlen + 1)); //+1 for \0
    if (!mp) {
        std::cout << "out of memory\n";
        exit(EXIT_FAILURE);
    }
    strcpy(mp, other.mp);
}

Sentence::Sentence(Sentence&& other) : mp(other.mp), mlen(other.mlen) //move constructor
{
    other.mp = nullptr;
}

Sentence& Sentence::operator=(Sentence&& other) //move assignment
{
    if (this == &other)
        return *this;

    free(mp);
    mp = other.mp;
    mlen = other.mlen;

    return *this;

}


Sentence& Sentence::operator=(const Sentence& other) //copy assignment
{
    if (this == &other) //self assignment
    {
        return *this;
    }
    free(mp);
    mlen = other.mlen;
    mp = static_cast<char*>(malloc(mlen + 1)); //+1 for \0
    if (!mp) {
        std::cout << "out of memory\n";
        exit(EXIT_FAILURE);
    }
    strcpy(mp, other.mp);

    return *this;
}

void Sentence::print() const
{
    std::cout << mp << "\n";
}

Sentence::~Sentence() //destructor
{
    if (mp)
        free(mp);

}

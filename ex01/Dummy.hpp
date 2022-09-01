#pragma once

#include <iostream>

class Dummy : public ATarget{
    public:
    Dummy() : ATarget("Target Practice Dummy"){}

    virtual ~Dummy(){}

    virtual ATarget * clone() const{
        return new Dummy;
    }
};
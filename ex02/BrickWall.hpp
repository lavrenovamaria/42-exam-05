#pragma once

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget{
    public:
    BrickWall() : ATarget("Inconspicuous Red-brick Wall"){}

    virtual ~BrickWall(){}

    virtual ATarget * clone() const{
        return new BrickWall;
    }
};
#pragma once

#include <iostream>

class BrickWall : public ATarget{
    public:
    BrickWall() : ATarget("Inconspicuous Red-brick Wall"){}
    virtual ~BrickWall(){}

    virtual ATarget * clone() const{
        return new BrickWall;
    }
};
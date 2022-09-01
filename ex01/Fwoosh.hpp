#pragma once

#include <iostream>

class Fwoosh : public ASpell{
    public:
    Fwoosh() : ASpell("Fwoosh", "fwooshed"){}

    virtual ~Fwoosh(){}

    virtual ASpell * clone() const{
        return new Fwoosh;
    }
};
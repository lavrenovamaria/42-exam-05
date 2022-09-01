#pragma once

#include <iostream>

class Fireball : public ASpell{
    public:
    Fireball() : ASpell("Fireball", "burnt to a crisp"){}

    virtual ~Fireball(){}

    virtual ASpell * clone() const{
        return new Fireball;
    }
};
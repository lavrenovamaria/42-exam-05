#pragma once

#include <iostream>
#include "ATarget.hpp"
class ATarget;
class ASpell{
    private:
    std::string _name;
    std::string _effects;
    public:
    ASpell(std::string name, std::string effects){
        _name = name;
        _effects = effects;
    }

    virtual ~ASpell(){}

    std::string getName() const{
        return _name;
    }

    std::string getEffects() const {
        return _effects;
    }

    virtual ASpell * clone() const = 0;

    void launch(const ATarget &arg) const;
};
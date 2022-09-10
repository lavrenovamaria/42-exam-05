#pragma once

#include <iostream>
#include "ASpell.hpp"
class ASpell;
class ATarget{
    private:
    std::string _type;
    public:
    ATarget(std::string type){
        _type = type;
    }

    ATarget(ATarget const &other);
    ATarget &operator=(ATarget const &other);

    virtual ~ATarget(){}

    std::string getType() const{
        return _type;
    }

    virtual ATarget * clone() const = 0;

    void getHitBySpell(const ASpell &arg) const;
};
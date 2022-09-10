#include "ASpell.hpp"

void  ASpell::launch(const ATarget &arg) const{
    arg.getHitBySpell(*this);
}

ASpell::ASpell(ASpell const &other) { *this = other;}

ASpell &ASpell::operator=(ASpell const &other)
{
    this->_name = other._name;
    this->_effects = other._effects;
    return (*this);
}
#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell &arg) const{
    std::cout << _type << " has been " << arg.getEffects() << "!\n";
}

ATarget::ATarget(ATarget const &other) { *this = other;}

ATarget &ATarget::operator=(ATarget const &other)
{
    this->_type = other._type;
    return (*this);
}
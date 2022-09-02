#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell &arg) const{
    std::cout << _type << " has been " << arg.getEffects() << "!\n";
}
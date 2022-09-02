#include "ASpell.hpp"

void  ASpell::launch(const ATarget &arg) const{
    arg.getHitBySpell(*this);
}
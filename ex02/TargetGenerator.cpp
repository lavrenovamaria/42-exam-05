#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator(){
    for (std::map<std::string, ATarget*>::iterator it = spellbook.begin(); it != spellbook.end(); it++)
        delete it->second;
    this->spellbook.clear();
}
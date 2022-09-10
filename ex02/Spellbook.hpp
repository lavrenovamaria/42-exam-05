#pragma once

#include <map>
#include "ASpell.hpp"

class Spellbook{
    private:
    std::map<std::string, ASpell *> spellbook;
    public:
    Spellbook(){}
    ~Spellbook(){}

    void learnSpell(ASpell*name){
        if(spellbook[name] != 0)
            spellbook[name->getName()] = name;
    }

    void forgetSpell(std::string const &name){
        if(spellbook[name] != 0)
            spellbook.erase(name);
    }

    ASpell* createSpell(std::string const &name){
        if(spellbook[name] != 0)
            return spellbook[name];
        return 0;
    }
};
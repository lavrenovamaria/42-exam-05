#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Spellbook {
    private:
    std::map<std::string, ASpell *> spellbook;
    public:
    Spellbook(){}
    ~Spellbook(){}

    void learnSpell(ASpell* spell){
        spellbook[spell.getName] = spell;
    }

    void forgetSpell(string const &name){
        if(spellbook[name] != 0)
            spellbook.erase(name);
    }

    ASpell* createSpell(string const &name){
        if(spellbook[name] != 0)
            return spellbook[name];
        return 0;
    }
}
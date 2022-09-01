#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator{
    private:
        std::map<std::string, ATarget *> spellbook;
    public:

    void learnTargetType(ATarget* name){
        spellbook[name->getType()] = name;
    }

    void forgetTargetType(std::string const &name){
        spellbook.erase(name);
    }

    ATarget* createTarget(std::string const &name){
        if(spellbook[name] != 0)
            return spellbook[name];
        return 0;
    }
};
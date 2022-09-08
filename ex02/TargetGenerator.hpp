#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator{
    private:
    std::map<std::string, ATarget *> spellbook;
    public:
    TargetGenerator(){}
    ~TargetGenerator(){}

    void learnTargetType(ATarget*name){
        spellbook[name->getType()] = name;
    }

    void forgetTargetType(std::string const &name){
        if(spellbook[name] != 0)
            spellbook.erase(name);
    }

    ATarget* createTarget(std::string const &name){
        
        if(spellbook.find(name) != spellbook.end())
            return spellbook[name];
        return 0;
    }
};
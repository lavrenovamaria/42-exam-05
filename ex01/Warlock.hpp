#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock{
    private:
    std::string _name;
    std::string _title;
    std::map<std::string, ASpell *> spellbook;
    public:
    Warlock(std::string name, std::string title){
        _name = name;
        _title = title;
        std::cout << _name << ": This looks like another boring day.\n";
    }
    ~Warlock(){
        std::cout << _name << ": My job here is done!\n";
    }

    std::string getName() const{
        return _name;
    }

    std::string getTitle() const{
        return _title;
    }

    void setTitle(std::string title){
        _title = title;
    }

    void introduce() const{
        std::cout << _name << ": I am" << _name << ", " << _title << "!\n";
    }

    void learnSpell(ASpell *name){
        spellbook[name->getName()] = name;
    }

    void forgetSpell(std::string name){
        if(spellbook[name] != 0)
            spellbook.erase(name);
    }

    void launchSpell(std::string name, const ATarget &arg){
        if(spellbook[name] != 0)
            spellbook[name]->launch(arg);
    }
};
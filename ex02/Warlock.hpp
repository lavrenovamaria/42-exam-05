#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "Spellbook.hpp"

class Warlock{
    private:
    std::string _name;
    std::string _title;
    Spellbook spellbook;
    public:
    Warlock(std::string name, std::string title){
        _name = name;
        _title = title;
        std::cout << _name << ": This looks like another boring day.\n";
    }
    ~Warlock(){
        std::cout << _name << ": My job here is done!\n";
    }

    void introduce() const{
        std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
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

    void learnSpell(ASpell * name){
        spellbook.learnSpell(name);
    }

    void forgetSpell(std::string name){
        if(spellbook.createSpell(name) != 0)
            spellbook.forgetSpell(name);
    }

    void launchSpell(std::string name, const ATarget & arg){
        ATarget const *ptr = 0;
        if(ptr == &arg)
            return;
        if(spellbook.createSpell(name) != 0)
            spellbook.createSpell(name)->launch(arg);
    }
};
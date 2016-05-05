#include "Fighter.h"
#pragma once
using namespace std;

class Cleric : public Fighter {
public:
    //Constructor
    Cleric(string name_in, int hp_in, int strength_in, int speed_in, int magic_in):
    Fighter(name_in, hp_in, strength_in, speed_in, magic_in){
      mana = magic * 5;
      maxmana = mana;
    }

    ~Cleric(){}

    //Accessors
    int getDamage(){return magic;}

    //Mutators
    void reset();

    void regenerate();

    bool useAbility();

private:
    int mana;
    int maxmana;
};

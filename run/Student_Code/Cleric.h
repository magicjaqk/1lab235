#include "Fighter.h"
#pragma once
using namespace std;

class Cleric : public Fighter {
public:
    //Constructor
    Cleric(string name_in, int hp_in, int strength_in, int speed_in, int magic_in):
    Fighter(name, hp, strength, speed, magic){
      name = name_in;
      hp = hp_in;
      maxhp = hp_in;
      strength = strength_in;
      speed = speed_in;
      magic = magic_in;
      mana = magic * 5;
      maxmana = mana;
    }

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

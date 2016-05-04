#include "Fighter.h"
#pragma once
using namespace std;

class Robot : public Fighter {
public:
    //Constructor
    Robot(string name_in, int hp_in, int strength_in, int speed_in, int magic_in):
    Fighter(name, hp, strength, speed, magic){
      name = name_in;
      hp = hp_in;
      maxhp = hp_in;
      strength = strength_in;
      speed = speed_in;
      magic = magic_in;
      energy = 5 * magic;
      maxEnergy = energy;
    }

    //Accessors

    int getDamage();

    //Mutators
    void reset();

    bool useAbility();

private:
    int energy
    double maxEnergy;
    int addDamage;
};

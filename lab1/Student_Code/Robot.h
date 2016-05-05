#include "Fighter.h"
#pragma once
using namespace std;

class Robot : public Fighter {
public:
    //Constructor
    Robot(string name_in, int hp_in, int strength_in, int speed_in, int magic_in):
    Fighter(name_in, hp_in, strength_in, speed_in, magic_in){
      energy = 2 * magic;
      maxEnergy = energy;
      addDamage = 0;
    }
    ~Robot(){}
    //Accessors

    int getDamage();

    //Mutators
    void reset();

    bool useAbility();

private:
    int energy;
    double maxEnergy;
    int addDamage;
};

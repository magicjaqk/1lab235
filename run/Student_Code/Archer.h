#include "Fighter.h"
#pragma once
using namespace std;

class Archer : public Fighter {
public:
    //Constructor
    Archer(string name_in, int hp_in, int strength_in, int speed_in, int magic_in):
      Fighter(name_in, hp_in, strength_in, speed_in, magic_in){
        origspeed = speed;
      }

    ~Archer(){}

    //Accessors
    int getDamage(){return speed;}

    //Mutators
    void reset();

    bool useAbility();


private:
  int origspeed;
};

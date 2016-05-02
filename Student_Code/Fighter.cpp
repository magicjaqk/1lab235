#include "Fighter.h"
using namespace std;

/** Constructor */
Fighter::Fighter(string name, int hp, int strength, int speed, int magic);

/** Accessors */
Fighter::getName(){
  return name;
}

Fighter::getMaximumHP(){
  return hp;
}

Fighter::getCurrentHP(){
  return curhp;
}

Fighter::getStrength(){
  return strength;
}

Fighter::getSpeed(){
  return speed;
}

/** Mutators */
Fighter::takeDamage(int damage){
  const int decspeed = 1/4;
  curhp -= damage - (decspeed * speed);
}
//There are problems with this function
Fighter::regenerate(){
  const int inchp = 1/6;
  if ((inchp * strength) < 1){
    curhp += 1;
  }
  else if ((curhp += inchp * strength) >= hp){
    continue;
  }
  else {
  curhp += inchp * strength;
}

}

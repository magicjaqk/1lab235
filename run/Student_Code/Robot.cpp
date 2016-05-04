#include "Robot.h"
#include <cmath>
using namespace std;

//Accessors
Robot::getDamage(){
  int temp = addDamage;
  addDamage = 0;
  return strength + temp;
}

//Mutators
Robot::reset(){
  Fighter::reset();
  energy = maxEnergy;
  addDamage = 0;
}

Robot::useAbility(){
  if (energy >= ROBOT_ABILITY_COST){
    double temp = energy / maxEnergy;
    temp = pow(temp, 4);
    temp = temp * strength;
    addDamage = temp;
    return true;
  }
  else (return false;)
}

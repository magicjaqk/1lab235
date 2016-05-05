#include "Robot.h"
#include <cmath>
using namespace std;

//Accessors
int Robot::getDamage(){

  int temp = addDamage;
  addDamage = 0;
  return (strength + temp);
}

//Mutators
void Robot::reset(){
  Fighter::reset();
  energy = maxEnergy;
  addDamage = 0;
}

bool Robot::useAbility(){
  cout << "before if " << energy << " " << strength << endl;
  if (energy >= ROBOT_ABILITY_COST){
    double temp = (double) energy / maxEnergy;
    cout << "temp " << temp << endl;
    temp = pow(temp, 4);
    temp = temp * strength;
    addDamage = temp;
    cout << energy << endl;
    energy -= ROBOT_ABILITY_COST;
    return true;
  }
  else {return false;}
}

#include "Archer.h"
using namespace std;

//Mutators
void Archer::reset(){
  Fighter::reset();
  speed = origspeed;
}

bool Archer::useAbility(){
  int inc = 1;
  speed += inc;
  return true;
}

#include "Archer.h"
using namespace std;

//Mutators
Archer::reset(){
  Fighter::reset();
  speed = origspeed;
}

Archer::useAbility(){
  int inc = 1;
  speed += inc;
}

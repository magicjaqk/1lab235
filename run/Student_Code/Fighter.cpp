#include "Fighter.h"
using namespace std;

/** Mutators */
void Fighter::takeDamage(int damage){
  double decspeed = (speed/4);
  double dechp = damage - decspeed;
  if (dechp == 0){
    dechp = 1;
  }
  hp = hp - dechp;
}

void Fighter::reset(){
  hp = maxhp;
}

void Fighter::regenerate(){
  int newhp = strength / 6;
  if (hp == maxhp){
    return;
  }
  else if ((hp + newhp) > maxhp){
    reset();
    return;
  }
  else if (newhp == 0){
    newhp = 1;
    hp += newhp;
    return;
  }
  hp += newhp;
}

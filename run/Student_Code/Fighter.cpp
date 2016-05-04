#include "Fighter.h"
using namespace std;

/** Mutators */
void Fighter::takeDamage(int damage){
  const int decspeed = 1/4;
  hp -= damage - (decspeed * speed);
}

void Fighter::reset(){
  hp = maxhp;
}

void Fighter::regenerate(){
  const int inc = 1/6;
  newhp = (inc * strength);
  if (newhp == 0){
    newhp = 1;
    hp += newhp;
    return;
  }
  else if (hp == maxhp){
    return;
  }
  else if ((hp + newhp) > maxhp){
    reset();
    return;
  }
  hp += newhp;
}

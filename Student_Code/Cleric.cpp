#include "Cleric.h"
using namespace std;

//Mutators
Cleric::reset(){
  Fighter::reset();
  mana = maxmana;
}

Cleric::regenerate(){
  Fighter::regenerate();
  const int inc = 1/5;
  newmana = (inc * mana);
  if (newmana == 0){
    newmana = 1;
    mana += newmana;
    return;
  }
  else if (mana == maxmana){
    return;
  }
  else if ((mana + newmana) > maxmana){
    reset();
    return;
  }
  mana += newmana;
}

Cleric::useAbility(){
  const int inc = 1/3;
  int inchp = inc * magic;
  if (inchp < 1){
    inchp = 1;
  }
  if (mana >= CLERIC_ABILITY_COST){
    if (hp != maxhp){
      hp += inchp;
    }
    mana -= CLERIC_ABILITY_COST;
  }
}

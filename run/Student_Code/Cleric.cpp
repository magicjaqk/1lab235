#include "Cleric.h"
using namespace std;

//Mutators
void Cleric::reset(){
  Fighter::reset();
  mana = maxmana;
}

void Cleric::regenerate(){
  Fighter::regenerate();
  const int inc = 1/5;
  int newmana = (inc * mana);
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

bool Cleric::useAbility(){
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
    return true;
  }
  else {return false;}
}

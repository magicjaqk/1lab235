#include "Cleric.h"
using namespace std;

//Mutators
void Cleric::reset(){
  Fighter::reset();
  mana = maxmana;
}

void Cleric::regenerate(){
  Fighter::regenerate();
  int newmana = magic / 5;
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
    if (mana < CLERIC_ABILITY_COST){
    return false;
    }

    if (mana >= CLERIC_ABILITY_COST){
      double inchp = magic/3;
      if (inchp < 1){
        inchp = 1;
      }
      if (hp < maxhp){
        hp += inchp;
        if (hp > maxhp){
          hp = maxhp;
        }
        mana -= CLERIC_ABILITY_COST;
        return true;
      }

      else if(hp == maxhp){
        mana -= CLERIC_ABILITY_COST;
        return true;
      }
    }
  }

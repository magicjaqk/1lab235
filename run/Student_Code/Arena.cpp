#include "Arena.h"
using namespace std;

/**Accessors*/
FighterInterface* Arena::getFighter(string name){
 for (int i = 0; i < getSize(); i++){
   if (fighters[i]->getName() == name){
     return fighters[i];
   }
 }
 return NULL;
}

int Arena::getSize(){
 return fighters.size();
}

/**Mutators*/
bool Arena::addFighter(string info){
  string name, type;
  int hp, strength, speed, magic, energy, mana;
  stringstream ss;
  ss << info;
  ss >> name >> type >> hp >> strength >> speed >> magic;
  if (type == "A"){
    Fighter* newFighter = new Archer(name, hp, strength, speed, magic);
    fighters.push_back(newFighter);
    return true;
  }
  else if (type == "R"){
    Fighter* newFighter = new Robot(name, hp, strength, speed, magic);
    fighters.push_back(newFighter);
    return true;
  }
  else if (type == "C"){
    Fighter* newFighter = new Cleric(name, hp, strength, speed, magic);
    fighters.push_back(newFighter);
    return true;
  }
  else {return false;}
}

bool Arena::removeFighter(string name){
  for (int i = 0; i < getSize(); i++){
    if (getFighter(name) == name){
      return true;
    }
  }
  return false;
}

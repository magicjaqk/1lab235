#include "Arena.h"
using namespace std;

//Constructor
Arena::Arena(){}
Arena::~Arena(){}

/**Accessors*/
Fighterinterface* Arena::getFighter(string name){
 for (int i = 0; i < fighters.size(); i++){
   if (fighters[i]->getname() == name){
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
  stringstream ss << info;
  ss >> name >> type >> hp >> strength >> speed >> magic;
  if (type == "A"){
    Fighter* newFighter = new Archer(name, hp, strength, speed, magic);
    fighters.push_back(newFighter);
    return true;
  }
  else if (type == "R"){
    Fighter* newFighter = new Robot(name, hp, strength, speed, magic, energy);
    fighters.push_back(newFighter);
    return true;
  }

}

bool Arena::removeFighter(){
  for (int i = 0; i < fighters.size(); i++){
    if (fighters[i]->getname() == name){
      return true;
    }
  }
  return false;
}

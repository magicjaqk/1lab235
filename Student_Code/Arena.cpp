#include "Arena.h"
using namespace std;

//Constructor
Arena::Arena(){
    vector<Fighter*> fighters;
}

//Accessors
Fighterinterface* Arena::getFighter(string name){
 bool go = 0;
 int address = 0;
 for (int i = 0; i < fighters.size(); i++){
   if (fighters[i].getname() == name){
     go = 1;
     address = i;
   }
 }
 if (go){
   return fighters[address];
 }
 else{
   return NULL;
 }
}

Arena::getSize(){
 return fighters.size();
}

//Mutators
Arena::addFighter(string info){
  
}

Arena::removeFighter(){

}

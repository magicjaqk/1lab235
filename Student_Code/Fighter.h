#include "Fighterinterface.h"
using namespace std;

class Fighter : public Fighterinterface {
public:
    //Contructor
    Fighter(string name, int hp, int strength, int speed, int magic);

    //Accessors
    string getName();

    int getMaximumHP();

    int getCurrentHP();

    int getStrength();

    int getSpeed();

    //Mutators
    void takeDamage(int damage);

    void regenerate();

private:
  string name;
  int hp;
  int curhp;
  int strength;
  int speed;
  int magic;
  int damage;


}

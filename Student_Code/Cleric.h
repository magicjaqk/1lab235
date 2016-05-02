#include "Fighter.h"
using namespace std;

class Cleric : public Fighter {
public:
    //Contructor
    Cleric(string name, int hp, int strength, int speed, int magic, int mana);

    //Accessors
    int getMagic();

    int getDamage();

    //Mutators
    void reset();

    void regenerate();

    bool useAbility();

private:
    int mana;
}

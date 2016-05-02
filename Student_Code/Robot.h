#include "Fighter.h"
using namespace std;

class Robot : public Fighter {
public:
    //Contructor
    Robot(string name, int hp, int strength, int speed, int magic, int energy);

    //Accessors
    int getMagic();

    int getDamage();

    //Mutators
    void regenerate();

    bool useAbility();

private:
    int energy
}

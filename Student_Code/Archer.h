#include "Fighter.h"
using namespace std;

class Archer : public Fighter {
public:
    //Constructor
    Archer(string name, int hp, int strength, int speed, int magic);

    //Accessors
    int getMagic() const;

    int getDamage() const;

    //Mutators
    void regenerate();

    bool useAbility();


private:

}

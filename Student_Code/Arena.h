#include "Arenainterface.h"
using namespace std;

class Arena : public Arenainterface {
public:
    //Contructor
    Arena();

    //Accessors
    Fighterinterface* getFighter(string name);

    int getSize() const;

    //Mutators
    bool addFighter(string info);

    bool removeFighter(string name);

private:

}

#include <iostream>
#include "Plante.h"
#include "Player.h"

using namespace std;


int main()
{

    Plante * banzai = new Plante("Banzai");

    (*banzai).afficher();

    Player * myself = Player("Botaniste");
    myself ->arrose(banzai);
    (*banzai).afficher();
    return 0;
}

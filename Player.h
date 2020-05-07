#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <Plante.h>

class Plante{
    private:
        std::string _nomPlayer;
        int _hydratation;

    public:
        void arrose(Plante * cible);
        void taille(Plante * cible);
        void boost(Plante * cible);
        Player(std::string nom);


};

#endif

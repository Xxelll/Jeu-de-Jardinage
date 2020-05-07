#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>
#include "Plante.h"

class Plante : public Plante{
    private:
        int _manger;
    public:
        void arroser(int eau);
        void tailler();
        void booster(int jour);
        Plante(std::string nom);
        void afficher();

};

#endif

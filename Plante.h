#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
    protected:
        std::string _name;
        int _hydratation;
        int _coupe;
        int _croissance;
        int _boost;
        int _sante;
    public:
        void arroser(int eau);
        void tailler();
        void booster(int jour);
        Plante(std::string nom);
        void afficher();

};

#endif

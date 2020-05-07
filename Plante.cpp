#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "Plante.h"
#include <iostream>
#include <string>

/* std::string_name; int _hydratation; int _coupe; int _croissance; int _boost; */

        void Plante::arroser(int eau){
            _hydratation-=eau;
            if(_hydratation<0) _hydratation=0;
            _croissance-=50;
            _sante-=30;
        }

        void Plante::tailler(){
            _coupe+=30;
            if(_coupe<70)
            _sante+=30;

        }

        void Plante::booster(int jour){
            _boost-=jour*1;
            if(_boost<0);
            _croissance+=30;
        }

        void Plante::bonneSante(){
          if(_sante<50) _sante=50
          _croissance += 30
        }

        void Plante::mauvaiseSante(){
          if(_sante>50)
          _croissance -= 30
        }


        Plante::Plante(std::string nom): _name(nom), _hydratation(50), _coupe(50), _sante(100)

        void Plante::afficher(){
            std::cout << "Plante de type"<<_name <<",avec une hydratation"<<_hydratation <<",une coupe à"<<_coupe <<"%" <<"et"<<_boost <<"d'engrais. La santé de la plante est de"<<_sante<<"%"<<
            std::endl;
        }
#endif

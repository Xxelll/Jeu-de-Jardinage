#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include "carnivore.h"
#include <iostream>
#include <string>
#include "Plante.h"

/* std::string_name; int _hydratation; int _coupe; int _croissance; int _boost; */

        void carnivore::arroser(int eau){
            _hydratation-=eau;
            if(_hydratation<0) _hydratation=0;
            _croissance-=50;
            _sante-=30;
        }

        void carnivore::tailler(){
            _coupe+=30;
            if(_coupe<70)
            _sante+=30;

        }

        void carnivore::booster(int jour){
            _boost-=jour*1;
            if(_boost<0);
            _croissance+=30;
        }

        void carnivore::bonneSante(){
          if(_sante<50) _sante=50
          _croissance += 30
        }

        void carnivore::mauvaiseSante(){
          if(_sante>50)
          _croissance -= 30
        }


        carnivore::carnivore(std::string nom): Plante(nom), _manger(){}

        void carnivore::afficher(){
            std::cout << "carnivore de type"<<_name <<",avec une hydratation"<<_hydratation <<",une coupe à"<<_coupe <<"%" <<"et"<<_boost <<"d'engrais. La santé de la carnivore est de"<<_sante<<"%"<<
            std::endl;
        }
#endif

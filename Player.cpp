#ifndef PLAYER_CPP
#define PLAYER_CPP

#include "Plante.h"
#include "Player.h"
#include <string>

  void Player::arrose(Plante * cible){
      cible->arroser(15);
  }

  void Player::taille(Plante * cible){
      cible->tailler();
  }
  void Player::boost(Plante * cible){
      cible->booster(1);
  }
  Player::Player(std::string nom) _nomPlayer(nom) {}

  #endif

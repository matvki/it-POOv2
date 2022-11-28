//
// Created by matteo vecchi on 28/11/2022.
//

#ifndef TEST_ANIMAL_H
#define TEST_ANIMAL_H


#include "Espece.h"
#include "RegimeAlimentaire.h"

class Animal {
    private:
        Espece espece{};
        int nombreDeMembres{};
        RegimeAlimentaire regimeAlimentaire{};
        int esperenceDeVie{};
        int dureeDeGestation{};
//    add constructor with all attributes
    public:
        Animal(Espece espece, int nombreDeMembres, RegimeAlimentaire regimeAlimentaire, int esperenceDeVie, int dureeDeGestation);

};


#endif //TEST_ANIMAL_H

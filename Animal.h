//
// Created by matteo vecchi on 28/11/2022.
//

#ifndef TEST_ANIMAL_H
#define TEST_ANIMAL_H


class Animal {

//    add attribute : espece (string), nombre de membres (int), regime alimentaire (string), esperence de vie (int), duree de gestation (int)
    private:
        char espece{};
        int nombreDeMembres{};
        char regimeAlimentaire{};
        int esperenceDeVie{};
        int dureeDeGestation{};
//    add constructor with all attributes
    public:
        Animal(char espece, int nombreDeMembres, char regimeAlimentaire, int esperenceDeVie, int dureeDeGestation);

};


#endif //TEST_ANIMAL_H

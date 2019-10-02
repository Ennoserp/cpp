#ifndef LISTE
#define LISTE

#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"

const int taille = 10;

class Liste{
    
    public:

        Rectangle ListRect[taille];
        Cercle ListCercle[taille];
        int nb_r;
        int nb_c;
        int compteur;

        Liste();
        ~Liste();
        int getCompteur();
        std::string toString();
        
        void ajouterCercle(Cercle);
        void ajouterRectangle(Rectangle);
};


#endif
#ifndef GROUPE
#define GROUPE

#include "Rectangle.hpp"
#include <sstream>
#include <iterator>
#include "Forme.hpp"


const int SIZE = 10;

class Groupe : public Forme {

    private:
        
        int compteur;
        Forme *formes[SIZE];
        Forme boite;

    public:

        Groupe();
        ~Groupe();
        int getCompteur();
        void addForme(Forme*);
        virtual std::string toString();
};

#endif
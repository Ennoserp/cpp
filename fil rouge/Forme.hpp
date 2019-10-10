#ifndef FORME
#define FORME

#include <iostream>
#include <sstream>
#include <string>
#include "Point.hpp"

enum COULEURS {
    NOIR, BLANC
};

class Forme{
    private:
        Point point;
        int w;
        int h;

        int id;
        COULEURS couleur;
        static int nbFormes;


    public:
        Forme();
        Forme(Point, int, int);
        ~Forme();

        void setW(int);
        int getW();

        void setH(int);
        int getH();

        static int getNbFormes();
        int prochainId();
        int getId();

        std::string toString();

};



#endif
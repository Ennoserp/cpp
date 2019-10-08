#ifndef FORME
#define FORME

#include "Point.hpp"

class Forme{
    private:
        Point point;
        int w;
        int h;
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
};

#endif
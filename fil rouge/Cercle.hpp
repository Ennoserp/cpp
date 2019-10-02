#ifndef CERCLE
#define CERCLE

#include <iostream>

class Cercle{

    private:

        int x;//abscisse origine
        int y;//ordonnée origine
        int w;//width
        int h;//height
        int ordre;

    public:

        Cercle();
        Cercle(int,int,int,int);
        Cercle(int,int,int);
        ~Cercle();

        void setX(int);
        int getX();

        void setY(int);
        int getY();

        void setW(int);
        int getW();

        void setH(int);
        int getH();

        void setOrdre(int);

        std::string toString();

        
};


#endif
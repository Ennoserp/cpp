#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>

class Rectangle{
    private:

        int x;//abscisse origine
        int y;//ordonnée origine
        int w;//width
        int h;//height
        int ordre;

    public:

        Rectangle();
        Rectangle(int,int,int,int);
        Rectangle(int,int,int,int,int);
        ~Rectangle();

        void setX(int);
        int getX();

        void setY(int);
        int getY();

        void setW(int);
        int getW();

        void setH(int);
        int getH();

        void setOrdre(int);
        int getOrdre();

        std::string toString();

};


#endif
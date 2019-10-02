#ifndef MERE
#define MERE

#include <iostream>

class Mere{

    private:

        int x;
        int y;

    public:

        Mere();
        Mere(int,int);
        ~Mere();

        void setX(int);
        int getX();

        void setY(int);
        int getY();

};

#endif
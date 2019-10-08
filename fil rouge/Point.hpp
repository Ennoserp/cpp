#ifndef POINT
#define POINT

#include <iostream>

class Point{
    private:
        int x;
        int y;

    public:
        Point();
        Point(int,int);
        ~Point();

        void setX(int);
        int getX();

        void setY(int);
        int getY();

};


#endif
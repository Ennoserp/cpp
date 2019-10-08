#include <iostream>
#include "Point.hpp"

Point::Point(){}
Point::Point(int x0, int y0): x(x0), y(y0){}
Point::~Point(){}

void Point::setX(int x0){
    x = x0;
}

int Point::getX(){
    return x;
}

void Point::setY(int y0){
    y = y0;
}

int Point::getY(){
    return y;
}
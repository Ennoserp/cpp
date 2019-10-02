#include <sstream>
#include "Rectangle.hpp"

Rectangle::Rectangle()
{
    x=y=w=h=0;
}
Rectangle::Rectangle(int x0,int y0,int w0,int h0){
    x = x0;
    y = y0;
    w = w0;
    h = h0;
}
Rectangle::Rectangle(int contructeur,int x0,int y0,int x1,int y1): 
    x(x0), y(y0), w(x1-x0), h(y1-y0){
}
Rectangle::~Rectangle(){}

void Rectangle::setX(int X){
    x = X;
}

int Rectangle::getX(){
    return x;
}

void Rectangle::setY(int Y){
    y = Y;
}

int Rectangle::getY(){
    return y;
}

void Rectangle::setW(int W){
    w = W;
}

int Rectangle::getW(){
    return w;
}

void Rectangle::setH(int H){
    h = H;
}

int Rectangle::getH(){
    return h;
}

void Rectangle::setOrdre(int ord){
    ordre = ord;
}

std::string Rectangle::toString(){
    std::ostringstream str;
    str << "RECTANGLE " << x << " " << y << " " << w << " " << h; 
    return str.str();
}
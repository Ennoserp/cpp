#include <sstream>
#include "Cercle.hpp"

Cercle::Cercle()
{
    x=y=w=h=0;
}
Cercle::Cercle(int x0,int y0,int w0,int h0){
    x = x0;
    y = y0;
    w = w0;
    h = h0;
}
Cercle::Cercle(int x0,int y0, int rayon){
    x = x0 - rayon;
    y = y0 - rayon;
    w = 2*rayon;
    h = 2*rayon;
}
Cercle::~Cercle(){}

void Cercle::setX(int X){
    x = X;
}

int Cercle::getX(){
    return x;
}

void Cercle::setY(int Y){
    y = Y;
}

int Cercle::getY(){
    return y;
}

void Cercle::setW(int W){
    w = W;
}

int Cercle::getW(){
    return w;
}

void Cercle::setH(int H){
    h = H;
}

int Cercle::getH(){
    return h;
}

void Cercle::setOrdre(int ord){
    ordre = ord;
}

int Cercle::getOrdre(){
    return ordre;
}

std::string Cercle::toString(){
    std::ostringstream str;
    str << "CERCLE " << x << " " << y << " " << w << " " << h; 
    return str.str();
}
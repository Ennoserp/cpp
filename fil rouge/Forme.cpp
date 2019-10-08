#include <iostream>
#include "Forme.hpp"


Forme::Forme(){
    nbFormes++;
}
Forme::Forme(Point p, int w0, int h0){
    point=p;
    w=w0;
    h=h0;
    nbFormes++;
}
Forme::~Forme(){
    nbFormes--;
}

int Forme::nbFormes= 0;

void Forme::setW(int w0){
    w=w0;
}

int Forme::getW(){
    return w;
}

void Forme::setH(int h0){
    h=h0;
}

int Forme::getH(){
    return h;
}

int Forme::getNbFormes(){
    return nbFormes;
}
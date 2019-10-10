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

int Forme::prochainId(){
    return nbFormes + 1;
}

int Forme::getId(){
    return id;
}

std::string Forme::toString(){
    std::ostringstream str;
    str << "Forme " << point.getX() << " " << point.getY() << " " << w << " " << h; 
    return str.str();
}
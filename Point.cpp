#include "Point.hpp"
#include <iostream>
#include <math.h>


Point::Point(){
    std::cout << "Contructeur par défaut" << std::endl;
    compteur++;
}
Point::Point(int i){
    std::cout << "Constructeur 1" << std::endl;
    x = 0;
    y = 0;
    z = 0;
    compteur++;
}

Point::~Point(){
    compteur--;
}

int Point::compteur = 0;

void Point::setX(int v1){
    x = v1;
}

void Point::setY(int v2){
    y = v2;
}

void Point::setZ(int v3){
    z = v3;
}

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

int Point::getZ(){
    return z;
}

void Point::deplacerDe(int x1, int y1, int z1){
    x+=x1;
    y+=y1;
    z+=z1;
}

void Point::deplacerVers(int x1, int y1, int z1){
    x=x1;
    y=y1;
    z=z1;
}

double distanceEuclidienne(Point p1, Point p2){
    return sqrt(pow((p1.getX()-p2.getX()),2) + pow((p1.getY()-p2.getY()),2) + pow((p1.getZ()-p2.getZ()),2));
}

int Point::getCompteur(){
    return compteur;
}

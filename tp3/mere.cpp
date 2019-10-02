#include <iostream>
#include <sstream>
#include "mere.hpp"

using namespace std;

Mere::Mere(){}
Mere::Mere(int x0, int y0): x(x0), y(y0){
    cout << "bonjour" << endl;
}
Mere::~Mere(){
    cout << "au revoir" << endl;
}

void Mere::setX(int X){
    x = X;
}

int Mere::getX(){
    return x;
}

void Mere::setY(int Y){
    y = Y;
}

int Mere::getY(){
    return y;
}
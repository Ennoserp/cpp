#include "Cercle.hpp"

Cercle::Cercle(): Forme() {}
Cercle::Cercle(int x0,int y0,int w0,int h0): Forme(Point(x0,y0),w0,h0) {}
Cercle::Cercle(int x0,int y0, int rayon): Forme(Point(x0,y0),x0 - rayon, y0 - rayon) {}


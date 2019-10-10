#include <sstream>
#include "Rectangle.hpp"

Rectangle::Rectangle(): Forme() {}
Rectangle::Rectangle(int x0,int y0,int w0,int h0): Forme(Point(x0,y0),w0,h0) {}
Rectangle::Rectangle(int x0,int y0,int x1,int y1,int argUseless): Forme(Point(x0,y0),x1 - x0,y1 - y0) {}



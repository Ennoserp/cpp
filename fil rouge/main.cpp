#include <iostream>
#include <sstream>
#include <string>
#include "Rectangle.hpp"
#include "Cercle.hpp"
//#include "Liste.hpp"
#include "Forme.hpp"
#include "Point.hpp"


int main() {

	Cercle r = Cercle(1,1,5,4);
	Rectangle p = Rectangle(1,1,1,1);
	Cercle r2 = Cercle(2,2,2,2);


	std::cout << "Hello World" << std::endl;

	Point po = Point(5,5);
	Forme forme = Forme(po,10,10);
	Forme form;

	std::cout << forme.getH() << std::endl;
	std::cout << forme.getW() << std::endl;

	return 1;
}
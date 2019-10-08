#include <iostream>
#include <sstream>
#include <string>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "liste.hpp"
#include "Forme.hpp"
#include "Point.hpp"


int main() {

	Cercle r = Cercle(1,1,5,4);
	Rectangle p = Rectangle(1,1,1,1);
	Cercle r2 = Cercle(2,2,2,2);
	Liste L1;
	L1.ajouterCercle(r);
	L1.ajouterRectangle(p);
	L1.ajouterCercle(r2);

	std::cout << "Hello World" << std::endl;
	std::cout << L1.toString() << std::endl;

	Point po = Point(5,5);
	Forme forme = Forme(po,10,10);
	Forme form;

	std::cout << forme.getH() << std::endl;
	std::cout << forme.getW() << std::endl;

	return 1;
}
#include <iostream>
#include <sstream>
#include <string>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "liste.hpp"


int main() {

	Cercle r = Cercle(1,1,5,4);
	Rectangle p = Rectangle(1,1,1,1);
	Liste L1;
	L1.ajouterCercle(r);
	L1.ajouterRectangle(p);

	std::cout << "Hello World" << std::endl;
	std::cout << L1.toString() << std::endl;

	return 1;
}
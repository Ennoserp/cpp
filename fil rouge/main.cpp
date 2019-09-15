#include <iostream>
#include "Rectangle.hpp"


int main() {

	Rectangle r = Rectangle(1,1,5,4);

	std::cout << "Hello World" << endl;
	std::cout << r.getX() << endl;

	return 1;
}
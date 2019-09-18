#include <iostream>
#include "Rectangle.hpp"


int main() {

	Rectangle r = Rectangle(1,1,5,4);

	std::cout << "Hello World" << std::endl;
	std::cout << r.getX() << std::endl;

	return 1;
}
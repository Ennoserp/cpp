#include <iostream>
#include "Point.cpp"

int main(){
    Point p1;
    Point p2(1);
    Point* p3 = new Point(1);

    p1.setX(4);
    p1.setY(8);
    p1.setZ(6);

    std::cout << "Hello World !!" << std::endl;
    std::cout <<  << std::endl;

    return 1;
}


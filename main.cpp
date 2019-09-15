#include <iostream>
#include "Point.cpp"

int main(){
    Point p1;
    Point p2;
    int a = 2;

    p1.setX(4);
    p1.setY(8);
    p1.setZ(6);
    
    p2.setX(10);
    p2.setY(10);
    p2.setZ(10);

    std::cout << "Hello World !!" << std::endl;
    std::cout << p1.getX() << std::endl;
    std::cout << p1.getY() << std::endl;
    std::cout << p1.getZ() << std::endl;

    std::cout << distanceEuclidienne(p1,p2) << std::endl;
    std::cout << &a << std::endl << a << std::endl;


    return 1;
}


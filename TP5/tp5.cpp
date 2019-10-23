#include <iostream>
#include "tp5.hpp"

Bavarde::Bavarde(){
    std::cout << "création" << std::endl;
}
Bavarde::Bavarde(int n){
    std::cout << "création" << std::endl;
}
Bavarde::~Bavarde(){
    std::cout << "suppression" << std::endl;
}

void test1(Bavarde b) {
  std::cout << "appel de fonction avec parametre objet et copie\n";
}

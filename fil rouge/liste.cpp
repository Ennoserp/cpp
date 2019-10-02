#include <sstream>
#include "Liste.hpp"
#include "Rectangle.hpp"
#include "Cercle.hpp"

Liste::Liste(){
    std::cout << "liste" << std::endl;
    nb_c = 0;
    nb_r = 0;
    compteur = 0;
}
Liste::~Liste(){}

int Liste::getCompteur(){
    return compteur;
}

std::string Liste::toString(){
    std::ostringstream ss;
    ss << "compteur" << compteur << ", nb cercle :" << nb_c << "nb rectangle : " << nb_r << std::endl;
    ss << "[";
    for (int i = 0; i<nb_r;++i){
        ss << "R" << i << " : " << ListRect[i].toString() << " ";
    }
    for (int i = 0; i<nb_c;++i){
        ss << "C" << i << " : " << ListCercle[i].toString() << " ";
    }
    ss << "]";
    return ss.str();
}

void Liste::ajouterCercle(Cercle c){
    c.setOrdre(nb_c);
    ListCercle[nb_c] = c;
    nb_c++;
    compteur++;
    }

void Liste::ajouterRectangle(Rectangle r){
    r.setOrdre(nb_r);
    ListRect[nb_r] = r;    
    nb_r++;
    compteur++;
}
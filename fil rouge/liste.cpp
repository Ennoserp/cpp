#include "Liste.hpp"

Groupe::Groupe() : compteur(0) {}

int Groupe::getCompteur()
{
    return compteur;
}

std::string Groupe::toString()
{
    std::ostringstream res;
    res << "[ ";
    for (int i = 0; i < compteur; ++i)
    {
        res << "{" << (formes[i])->toString() << "} ";
    }
    res << "]";
    return res.str();
}


void Groupe::addForme(Forme* f){

    f->setOrdre(compteur);
    formes[compteur++] = f;
    if (compteur==1)
    {
        boite.setPoint(formes[0]->getOrigin());
        boite.setH(formes[0]->getH());
        boite.setW(formes[0]->getW());
    }
    else
    {
    
        if (boite.getOrigin().getX()> f->getOrigin().getX())
        {
            boite.getOrigin().setX(f->getOrigin().getX());
        }

        if (boite.getOrigin().getY()> f->getOrigin().getY())
        {
            boite.getOrigin().setY(f->getOrigin().getY());
        }

        if (boite.getH() + boite.getOrigin().getY() < f->getH() + f->getOrigin().getY())
        {
            boite.setH(f->getH() + f->getOrigin().getY() - boite.getOrigin().getY());
        }

        if (boite.getW() + boite.getOrigin().getY() < f->getW() + f->getOrigin().getX())
        {
            boite.setW(f->getW() + f->getOrigin().getX() - boite.getOrigin().getX());
        }
    }

}
#ifndef ENVIRONNEMENT_H
#define ENVIRONNEMENT_H
#include <iostream>
#include <vector>
#include "coordonnees.h"

using namespace::std ;

class Environnement 
{
    public : 
    Environnement(std::string name);
    std::string name ;
    vector<Coordonnees> Obstacles;
    Coordonnees coordonnees_max;
    void initialise_environnement();

};
 

#endif
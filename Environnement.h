#ifndef ENVIRONNEMENT_H
#define ENVIRONNEMENT_H
#include <iostream>
#include <vector>
#include "coordonnees.h"
#include <random>
#include <list>

using namespace::std ;

class Environnement 
{
    public : 
    Environnement(std::string name);
    std::string name ;
    list<Coordonnees> Obstacles;
    Coordonnees coordonnees_max;
    void initialise_environnement(int taille);
    void deployer();
    int nb_obstacles;

};
 

#endif
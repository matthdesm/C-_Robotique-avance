#include "Environnement.h"

Environnement::Environnement(std::string name){};

void Environnement::initialise_environnement(){

    
    std::string name = "Environnement" ; 
    Environnement environnement(name);
    int taille;
    std::cout << "Choisissez le taille de l'environnement " << " : ";
    std::cin >> taille ;
    environnement.name=name;
    environnement.coordonnees_max.x = taille; 
    environnement.coordonnees_max.y = taille;
    
    
    std::vector<Coordonnees> obstacles;
    obstacles.push_back(Coordonnees(x, y) ) ;
    environnement.Obstacles = obstacles ;

}

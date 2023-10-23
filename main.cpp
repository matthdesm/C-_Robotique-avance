#include <iostream>
//#include <vector>
#include "coordonnees.h"
#include "Environnement.h"
#include "robot.h"

using namespace::std ;



int main() {

    /*std::string name = "Environnement" ; 
    Environnement environnement(name);
    int taille;
    std::cout << "Choisissez le taille de l'environnement " << " : ";
    std::cin >> taille ;
    //std::cout << taille;

    environnement.name=name;
    environnement.coordonnees_max.x = taille; 
    environnement.coordonnees_max.y = taille;
    
    std::cout << environnement.coordonnees_max.x;
    

    int x=5;
    int y=3;
    std::vector<Coordonnees> obstacles;
    obstacles.push_back(Coordonnees(x, y) ) ;
    environnement.Obstacles = obstacles ;
    */
    Robot myrobot ;
    myrobot.position.x = 0;
    myrobot.position.y = 0;

}
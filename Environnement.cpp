#include "Environnement.h"

Environnement::Environnement(std::string name){
    this->name=name;
};

void Environnement::initialise_environnement(int taille){

    
    
   
    this->coordonnees_max.x = taille; 
    this->coordonnees_max.y = taille;
    
    this->nb_obstacles = rand() % taille/3 ;
    std::cout<<this->nb_obstacles;
    int x;
    int y;

    std::list<Coordonnees> obstacles;
    
    for(int i = 0; i < this->nb_obstacles; i++){

        x = rand() % this->coordonnees_max.x ;
        y = rand() % this->coordonnees_max.y ;
        std::cout<<x;
        if (x != 0 || y != 0){
           
            obstacles.push_back(Coordonnees( x, y) ) ;
        }
    }
    this->Obstacles = obstacles ;
}

void Environnement::deployer(){

    for (int i = this->coordonnees_max.y; i > 0; i--){
        for (int j = 0; j < this->coordonnees_max.y ; i++){
            
            std::string affiche="0";
            //Cherche si un obstacle se trouve sur la case
            for (std::list<Coordonnees>::iterator it = (this->Obstacles).begin(); it != (this->Obstacles).end(); ++it){

                if((*it).x == i && (*it).y == j){

                    affiche="X";

                }  

            }

            //std::cout<< affiche ;

        }
        std::cout << std::endl;

    }

}

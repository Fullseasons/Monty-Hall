#include <cstdlib>
#include <iostream>
#include <vector>
#include <array>
#include <string>

#include "basic_function.h"

using namespace std;

int rand_1_3(){ //renvoye un entier entre 1 et 3
    
    return (rand()%3 +1);
}

bool MontyHall(){ //return 0 stay, 1 si switch
    int porte_gagnante = rand_1_3();
    int porte_actuelle = rand_1_3();
    int porte_ouverte = rand_1_3();

    while (porte_ouverte == porte_actuelle || porte_ouverte == porte_gagnante)
    {
        porte_ouverte = rand_1_3();
    }

    if(porte_actuelle == porte_gagnante){
        return 0;
    } else {
        return 1;
    }
} 

void SuiviStat(double nombreIterance){
    int victoire_switch=0;
    int victoire_stay=0;
    for(int i = 0; i < nombreIterance;i++){
        if (MontyHall()==0)
        {
           victoire_stay++;
        } else{
            victoire_switch++;
        }  
    }
    cout<<"Pourcentage victoire si on reste: "<<static_cast<double>(victoire_stay)/nombreIterance*100<<"%"<<endl;
    cout<<"Pourcentage victoire si on change: "<<static_cast<double>(victoire_switch)/nombreIterance*100<<"%"<<endl;
}
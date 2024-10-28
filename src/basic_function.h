#pragma once
#include <vector>
#include <iostream>
#include <array>
#include <string>

using namespace std;


int rand_1_3(); //renvoie un nombre aleatoire entre 1 et 3
bool MontyHall(); //fait marcher le jeu (return 1 si win en restant, 0 en changeant)
void SuiviStat(double); //va permettre de stocker le nombre win/lose
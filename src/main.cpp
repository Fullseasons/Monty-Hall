#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <array>

#include "basic_function.cpp"

using namespace std;

int main()
{
    srand(time(0));
    SuiviStat(10000);
    return 0;
}

/* resultat, switch = 2/3 win chance, staying = 1/3 win chance */
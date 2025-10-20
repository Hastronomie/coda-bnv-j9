#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

void fill_struct(character * perso)
{
    perso->name = "Paul";
    perso->strength = 100;
    perso->intelligence = 101;
    perso->wisdom = 50;
    perso->agility = 80;
    perso->endurance = 2;

}

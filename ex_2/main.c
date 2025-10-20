#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int main()
{
    character perso;
    fill_struct(&perso);
    printf("Le héros c'est %s. Il a %d en force et a %d en intelligence, %d en sagesse, %d en agilité et %d en endurance !\n", perso.name, perso.strength, perso.intelligence, perso.wisdom, perso.agility, perso.endurance);
    exit(0);
}

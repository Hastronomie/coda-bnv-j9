#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"


int main()
{
    character *perso = malloc(sizeof(*perso));
    perso->name = malloc(str_len("Paul") * sizeof(char));
    //si je veux utiliser la fonction qu'on a fait, je vire la ligne du dessus 
    perso->name = strcpy(perso->name, "Paul");
    perso->strength = 100;
    perso->intelligence = 101;
    perso->wisdom = 50;
    perso->agility = 80;
    perso->endurance = 2;

    printf("Le héros c'est %s. Il a %d en force et a %d en intelligence, %d en sagesse, %d en agilité et %d en endurance !\n", perso->name, perso->strength, perso->intelligence, perso->wisdom, perso->agility, perso->endurance);
    free(perso->name);
    free(perso);
    exit(0);
}

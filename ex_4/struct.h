#ifndef __STRUCT_H__
#define __STRUCT_H__

struct s_char 
{
    char *name;
    int strength;
    int intelligence;
    int wisdom;
    int agility;
    int endurance;
};

typedef struct s_char character;
char *str_cpy(char * str);
int str_len(char *str);

#endif
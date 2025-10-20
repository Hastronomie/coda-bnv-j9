#include <stdlib.h>
#include "struct.h"

char *str_cpy(char * str)
{
  char *cpy = NULL;
  int length = str_len(str);

  cpy = malloc((length + 1) * sizeof(char));
  cpy[length] = '\0';

  int i = 0;

  while(str[i] != '\0')
  {
    cpy[i] = str[i];
    i = i + 1;
  }

  return(cpy);
}
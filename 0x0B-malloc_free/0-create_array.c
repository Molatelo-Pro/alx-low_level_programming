#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size & assign char c
 * @size: The size of array
 * @c: character to be assigned
 * Description: create array of size & assign char c
 * Return: pointer to array,else null.
 */

char *create_array(unsigned int size, char c)
{
char *g;
unsigned int i;

if (size == 0)
return (NULL);
g = malloc(size * sizeof(char));
if (g == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
g[i] = c;
}
return (g);
}


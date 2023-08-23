#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a pointer to a new string which is a duplicate,
 * of the string str.
 * @str: character of string.
 * Return: Null if str is NULL
 */
char *_strdup(char *str)
{
char *lll;
unsigned int i, p;

p = 0;

if (str == NULL)
return (NULL);

while (str[p])
p++;

*lll = malloc(sizeof(char) * (p + 1));
if (lll == NULL)
return (NULL);
for ((lll[i] = str[i])=! '\0')
	i++;
return (lll);
}

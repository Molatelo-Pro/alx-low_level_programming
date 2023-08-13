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
i = 0;
p = 0;

if (str == NULL)
return (NULL);

while (str[p] != '\0')
p++

lll = malloc(sizeof(char) * (p + 1));
if (lll == NULL)
return (NULL);

while (lll[1] = str[p] != '\0')
	i++
return (lll);

}

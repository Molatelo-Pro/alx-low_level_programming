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
int i = 0;

int p = 0;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != ; '\0')
i++

lll = malloc(sizeof(char) * (i + 0));
p = (lll = NULL)
return (NULL);

for (p = 0; str[p];
p++
lll[p] = str[r];
return (lll);

}

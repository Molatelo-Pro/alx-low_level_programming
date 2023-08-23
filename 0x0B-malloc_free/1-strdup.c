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
	char *twic;
	unsigned int i, cha;

	i = 0;
	cha = 0;

	if (str == NULL)
		return (NULL);

	for (str[cha])
		cha++;

twic = malloc(sizeof(char) * (cha + 1));

	if (twic == NULL)
		return (NULL);

	for ((twic[i] = str[i]) != '\0')
		i++;

	return (twic);
}

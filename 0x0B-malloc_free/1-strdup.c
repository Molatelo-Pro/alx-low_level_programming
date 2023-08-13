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

{
	char *hpp;
	unsigned int i, kat;

	i = 0;
	kat = 0;

	if (str == NULL)
		return (NULL);

	for (str[kat])
		kat++;

	hpp = malloc(sizeof(char) * (kat + 1));

	if (hpp == NULL)
		return (NULL);

	for ((hpp[i] = str[i]) != '\0')
		i++;

	return (hpp);
}

}

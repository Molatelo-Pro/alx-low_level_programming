#include "main.h"

/**
 * _strlen -function returns the length of a string
 * @s: string to be evaluated.
 * Return:function of the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

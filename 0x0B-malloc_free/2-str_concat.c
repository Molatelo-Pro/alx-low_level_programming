#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Write a function that returns a pointer
 *
 * @str: returns a pointer to the duplicated string
 * Return: returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *new_str, *pypi;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	pypi = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = pypi;
	new_str = malloc(sizeof(char) * (len + 1));
	pypi = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (pypi);
	}
	else
		return (NULL);
}

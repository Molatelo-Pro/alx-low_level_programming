#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest:  function appends the src string to the dest string
 * @src: addition of string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}



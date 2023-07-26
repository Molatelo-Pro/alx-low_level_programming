#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest:  pointer to the resulting string
 * @src: source of string
 * @n: number of bytes of str to concatenate
 *
 * Return:  pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';

	return (dest);
}


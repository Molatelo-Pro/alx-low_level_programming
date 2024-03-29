#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer value returned to dest
 * @src: function that copies the string pointed to by src
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src
 * terminating null byte.
 * @dest: destination
 * @src: source
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

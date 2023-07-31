
#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory stored
 *@src: memory copied
 *@n: number of bytes
 *Return: n bytes from memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

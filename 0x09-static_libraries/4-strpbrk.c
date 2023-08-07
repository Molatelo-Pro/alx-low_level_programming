#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: 1st string.
 * @accept: 2nd string.
 * Return: a pointer to byte in s,
 * else NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
				return (s + i);
		}
	}
	return ('\0');
}

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: bytes accepted.
 * Return: number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}

#include "main.h"
/**
 * _strspn - Entry point
 * @s: input number of bytes in the initial segment
 * @accept: input s consist only of bytes from.
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

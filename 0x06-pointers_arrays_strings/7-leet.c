#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, k;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[i] == a[k])
			{
				s[i] = b[k];
			}
		}
	}

	return (s);
}

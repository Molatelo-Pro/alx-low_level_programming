#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string1 to compare
 * @s2: string2 to compare
 * Return: less than 0 if str1 is less than str2, 0 if they're equal,
 * more than 0 if str1 is greater than str2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

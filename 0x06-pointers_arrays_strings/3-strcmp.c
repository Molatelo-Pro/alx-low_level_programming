#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string1 to compare
 * @s2: string2 to compare
 * Return: less than 0 if str1 is less than str2, 0 if they're equal,
 * more than 0 if str1 is greater than str2
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return (0);
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

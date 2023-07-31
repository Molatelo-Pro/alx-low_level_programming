#include "main.h"
/**
 * _strchr - Entry point
 * @s: input of in the string s
* or NULL if the character is not found
 * @c: input of  first occurrence of the character c
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

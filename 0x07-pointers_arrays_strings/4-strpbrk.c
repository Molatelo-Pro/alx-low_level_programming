#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input for  function locates the first occurrence in the string
 * @accept: input of any of the bytes in the string 
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*s == accept[p])
		return (s);
		}
	s++;
	}

return ('\0');
}

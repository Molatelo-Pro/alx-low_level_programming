#include "main.h"
/**
 * _isalpha - Check character is an alphabet char
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}

#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: Converting string
 *
 * Return:int converted from the string
 */
int _atoi(char *s)
{
	int l, x, m, len, t, digit;

	l = 0;
	x = 0;
	m = 0;
	len = 0;
	t = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (l < len && t == 0)
	{
		if (s[l] == '-')
			++x;

		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (x % 2)
				digit = -digit;
			m = m * 10 + digit;
			t = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			t = 0;
		}
		l++;
	}

	if (t == 0)
		return (0);

	return (m);
}

#include "main.h"

/**
 * _sqrt - recursing to find the natural square root of a number
 * @n: number to be evaluated
 * @i: iterator
 *
 * Return: square root result
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: number to be evaluated
 *
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

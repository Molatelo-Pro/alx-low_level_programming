#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: n1.
 * @m: n2.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits);
}

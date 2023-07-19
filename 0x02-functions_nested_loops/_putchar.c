#include <unistd.h>

/**
 * _putchar - that writes charecter c to stdout
 * @c: character to print
 * return: on success 1.
 * on errorr, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

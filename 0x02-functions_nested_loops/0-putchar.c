#include <stdio.h>

/**
 * main -  program that prints _putchar, followed by a new line
 * return: Always 0 (success)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

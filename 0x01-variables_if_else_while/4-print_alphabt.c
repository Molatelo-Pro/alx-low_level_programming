#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 *         and Print all the letters except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
putchar(alphabet);
}

putchar('\n');

return (0);
}

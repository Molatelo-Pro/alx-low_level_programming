#include <stdio.h>

/**
 * main - program prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
char alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
putchar(alphabet);

putchar('\n');

return (0);
}

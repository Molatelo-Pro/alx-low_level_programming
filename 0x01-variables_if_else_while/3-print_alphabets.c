#include <stdio.h>

/**
 * main -program that prints the alphabet in lowercase then in uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);

putchar('\n');

return (0);
}

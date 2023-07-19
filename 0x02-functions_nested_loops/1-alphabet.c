#include <main.h>

/**
 * main - function that prints the alphabet in lowercase.
 * return: Always 0 (success)
 */
void print_alphabet(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar (alphabet);
}
_putchar (10);
}

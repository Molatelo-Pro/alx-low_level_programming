#include <stdio.h>
/**
 * main - prints number of arguments.
 * @argc: number of cli arguments.
 * @argv: array contains program cli arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

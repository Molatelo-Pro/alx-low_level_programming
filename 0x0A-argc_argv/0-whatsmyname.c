#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of cli arguments.
 * @argv: array contains program cli arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

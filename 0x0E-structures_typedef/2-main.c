#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
struct dog my_dog;

my_dog.name = "Runner";
my_dog.age = 3.9;
my_dog.owner = "Marcia";
print_dog(&my_dog);
return (0);
}

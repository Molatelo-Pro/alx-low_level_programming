#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: dog's struct
 * Return: Always 0 (success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name:(nil)\n");
	else
		printf("name:%s\n", d->name);
	if (d->age < 0)
		printf("age:(nil)\n");
	else
		printf("age:%f\n", d->age);
	if (d->owner == NULL)
		printf("owner:(nil)\n");
	else
		printf("owner:%s\n", d->owner);
printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

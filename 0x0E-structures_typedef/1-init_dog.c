#include "dog.h"
#include <stdlib.h>
/**
 * int_dog - function that initialize a variable
 * @d: init the dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

#ifndef DOG_H
#define DOG_H
/**
 * struct_dog - Define a new type,
 * with the following elements:
 * @name: Dog name.
 * @age: Dog name.
 * @owner: Dog owner.
 * Return: Always 0 (Success)
 */

struct dog

{

char *name;
float age;
char *owner;

};

/**
 * dog_t - typedef struct dog.
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

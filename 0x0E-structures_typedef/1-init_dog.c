#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to structure.
 * @name: pointer to character (dog's name).
 * @age: pointer to float (dog's age).
 * @owner: pointer to char (dog's owner).
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

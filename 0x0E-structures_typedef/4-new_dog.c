#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner.
 *
 * Return: pointer to new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	
	if (!name || !owner)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}




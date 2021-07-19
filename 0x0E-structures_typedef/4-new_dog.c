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
	unsigned int name_len, owner_len, i = 0;

	unsigned int _strlen(char *str);
	if (!name || !owner)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);

	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	p->name = malloc(name_len * sizeof(char));
	if (!(p->name))
		return (free(p), NULL);
	while (i < name_len)
	{
		p->name[i] = name[i];
		i++;
	}

	p->age = age;

	p->owner = malloc(owner_len * sizeof(char));
	if (!(p->owner))
		return (free(p->name), free(p), NULL);
	i = 0;
	while (i < owner_len)
	{
		p->owner[i] = owner[i];
		i++;
	}

	return (p);
}

/**
 * _strlen - returns length of a string.
 * @str: string whose length is to be returned.
 *
 * Return: length of string.
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*str++)
		i++;

	return (i);
}


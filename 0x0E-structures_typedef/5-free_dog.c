#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: pointer to struct new_dog.
 */

void free_dog(dog_t *d)
{
	unsigned int i;

	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

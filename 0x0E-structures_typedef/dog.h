#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure containing dog attributes.
 * @name: name of dog
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Description: attributes of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

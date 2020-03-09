#include "dog.h"
/**
 * init_dog - Initilize the values of variables
 * @d: pointer the dog
 * @name: poiinter to the name of dog
 * @age: age of the dog
 * @owner: pointer to dog's owner
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

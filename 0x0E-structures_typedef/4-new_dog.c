#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Initilize the values of variables to new dog
 * @name: poiinter to the name of dog
 * @age: age of the dog
 * @owner: pointer to dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newperrito;

	newperrito = malloc(sizeof(struct dog));
	if (!newperrito)
		return (NULL);
	newperrito->name = strdup(name);
	newperrito->age = age;
	newperrito->owner = strdup(owner);
	return (newperrito);
}

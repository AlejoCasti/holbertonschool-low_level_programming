#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int c = 0, s = 0;

	char *d;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
	{
		s++;
		c++;
	}
	c = 0;
	d = malloc(sizeof(char) * (s + 1));
	if (d == NULL)
		return (NULL);
	while (c < (s + 1))
	{
		d[c] = str[c];
		c++;
	}

	if (str == NULL)
		return (NULL);
	return (d);
}
/**
 * new_dog - Initilize the values of variables to new dog
 * @name: poiinter to the name of dog
 * @age: age of the dog
 * @owner: pointer to dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newperrito;
	char *namecpy;
	char *ownercpy;

	ownercpy = _strdup(owner);
	namecpy = _strdup(name);
	if (!ownercpy || !namecpy)
	{
		free(ownercpy);
		free(namecpy);
		return (NULL);
	}
	newperrito = malloc(sizeof(struct dog));
	if (!newperrito)
		return (NULL);
	newperrito->name = namecpy;
	newperrito->age = age;
	newperrito->owner = ownercpy;
	return (newperrito);
}

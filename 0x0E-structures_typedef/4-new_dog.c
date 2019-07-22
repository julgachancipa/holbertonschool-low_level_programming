#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog.
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(name) + sizeof(age) + sizeof(name));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}

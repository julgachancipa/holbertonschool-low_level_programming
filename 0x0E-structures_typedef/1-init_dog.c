#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: var
 * @name: name of the dog
 * @age: dog's age
 * @owner: owner
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

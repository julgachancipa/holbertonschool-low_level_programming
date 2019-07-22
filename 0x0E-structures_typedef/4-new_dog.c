#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
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
	int szn = _strlen(name);
	int szo = _strlen(owner);
	int i, j;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * szn + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * szo + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < szn; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';
	for (j = 0; j < szo; j++)
		ndog->name[j] = name[j];
	ndog->name[j] = '\0';
	ndog->age = age;
	return (ndog);
}

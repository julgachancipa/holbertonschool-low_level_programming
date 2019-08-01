#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: str len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
/**
 * add_node -  adds a new node at the begginig of a list_t list.
 * @head: pointer to header
 * @str: string to add in the new node
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = _strlen(str);
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}

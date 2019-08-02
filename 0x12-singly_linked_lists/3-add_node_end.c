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
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to header
 * @str: string to add in the new node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = _strlen(str);
	list_t *new;
	list_t *end = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (new);
}

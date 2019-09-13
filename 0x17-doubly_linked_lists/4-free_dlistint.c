#include "lists.h"
/**
 * free_dlistint - Write a function that free a dlistint_t list.
 * @head: header node.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}

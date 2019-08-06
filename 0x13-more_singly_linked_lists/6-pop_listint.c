#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node.
 * @head: pointer to the head pointer.
 * Return: head nodes data.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *h;
	listint_t *aux;

	if (*head == NULL)
	{
		return (0);
	}
	h = *head;
	aux = h->next;
	n = h->n;
	free(h);
	*head = aux;
	return (n);
}

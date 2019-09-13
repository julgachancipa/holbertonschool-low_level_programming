#include "lists.h"
/**
 * sum_dlistint - sum the nodes data
 * @head: header node.
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

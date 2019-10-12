#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < (ht->size); i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (i != (ht->size) - 1 && current->next != NULL)
				printf(" ,");
			current = current->next;
		}
	}
	printf("}\n");
}

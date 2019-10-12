#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i, flag = 0;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < (ht->size); i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag)
				printf(", ");
			flag = 1;
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}

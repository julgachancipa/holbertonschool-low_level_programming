#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *current, *prev;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < (ht->size); i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			prev = current;
			free(prev->key);
			free(prev->value);
			free(prev);
			current = prev->next;
		}
	}
	free(ht->array);
	free(ht);
}

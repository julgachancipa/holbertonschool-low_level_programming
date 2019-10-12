#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: is the key
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);
	for (i = 0; i < (ht->size); i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}

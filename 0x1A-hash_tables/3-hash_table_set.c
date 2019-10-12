#include "hash_tables.h"
/**
 * ht_pair_first - conf first new node
 * @key: is the key
 * @value: key's value
 * Return: created node
 */
hash_node_t *ht_pair_first(const char *key, const char *value)
{
	hash_node_t *nw_node;

	nw_node = malloc(sizeof(hash_node_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->key = malloc(strlen(key) + 1);
	if (nw_node->key == NULL)
		return (NULL);
	nw_node->value = malloc(strlen(value) + 1);
	if (nw_node->value == NULL)
		return (NULL);
	strcpy(nw_node->key, key);
	strcpy(nw_node->value, value);
	nw_node->next = NULL;
	return (nw_node);
}
/**
 * ht_pair - conf first new node
 * @c: last header node
 * @key: is the key
 * @value: key's value
 * Return: created node
 */
hash_node_t *ht_pair(hash_node_t *c, const char *key, const char *value)
{
	hash_node_t *nw_node;

	nw_node = malloc(sizeof(hash_node_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->key = malloc(strlen(key) + 1);
	if (nw_node->key == NULL)
		return (NULL);
	nw_node->value = malloc(strlen(value) + 1);
	if (nw_node->value == NULL)
		return (NULL);
	strcpy(nw_node->key, key);
	strcpy(nw_node->value, value);
	nw_node->next = c;
	return (nw_node);
}
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: is the key
 * @value: key's value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *prev;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
		ht->array[index] = ht_pair_first(key, value);
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = malloc(strlen(value) + 1);
			if (current->value == NULL)
				return (0);
			strcpy(current->value, value);
			return (1);
		}
		prev = current;
		current = prev->next;
	}
	current = ht->array[index];
	ht->array[index] = ht_pair(current, key, value);
	if (ht->array[index] == NULL)
		return (0);
	return (1);
}

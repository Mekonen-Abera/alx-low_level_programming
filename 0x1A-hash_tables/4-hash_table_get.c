#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table
 * @key: Key hash table
 * Done by: Mekonen Abera
 * Return: if the value works, NULL if it doesn't work
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}


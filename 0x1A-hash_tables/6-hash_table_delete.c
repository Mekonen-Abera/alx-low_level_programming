#include "hash_tables.h"

/**
 * hash_table_delete -  A function that deletes a hash table
 * @ht: Hash table
 * Done by: Mekonen Abera
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				current = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = current;
			}
		}
	}
	free(ht->array);
	free(ht);
}


#include "hash_tables.h"

/**
 * key_index - A a function that gives you the index of a key
 * @key: Key to be indexed
 * @size: Size of the hash table
 * Done by: Mekonen Abera
 * Return: Integer after the operations
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}


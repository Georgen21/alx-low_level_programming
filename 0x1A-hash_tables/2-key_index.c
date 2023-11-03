#include "hash_tables.h"

/**
 * key_index - Generates the key/value using the hash_djb2.
 * @key: The pointer to the key.
 * @size: The size of array to the hash table.
 * Return: The index key.
 * Description: Using the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

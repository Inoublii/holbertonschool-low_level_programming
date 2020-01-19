#include "hash_tables.h"

/**
 * hash_table_create - creates hash table.
 * @size: size of array
 * Return: a pointer hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *x;

	x = malloc(sizeof(hash_table_t));
	if (size == 0)
		return (x);
	if (!x)
		return (NULL);
	x->array = malloc(sizeof(hash_node_t *) * size);
	if (!x->array)
		return (NULL);
	x->size = size;
	return (x);
}

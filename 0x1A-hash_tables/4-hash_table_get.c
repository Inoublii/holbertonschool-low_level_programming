#include "hash_tables.h"

/**
 * hash_table_get -value with a key
 * @ht: table
 * @key: key
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;
if ((!key || !key[0]) || (!ht || !ht->array))
	return (NULL);
index = key_index((const unsigned char *)key, ht->size);
if (!ht->array[index])
	return (NULL);
tmp = ht->array[index];
while (tmp)
{
	if (strcmp((const char *)key, tmp->key) == 0)
	{
		return (tmp->value);
	}
	tmp = tmp->next;
}
return (NULL);
}

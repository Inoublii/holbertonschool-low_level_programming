#include "hash_tables.h"

/**
 * hash_table_get -value with a key
 * @ht: table
 * @key: key
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
unsigned int long i;
if ((!key || !key[0]) || (!ht || !ht->array))
	return (NULL);
i = key_index((unsigned char *)key, ht->size);
if (!ht->array[i])
{
    return (NULL);
}
tmp = ht->array[i];
while (tmp)
{
	if (strcmp(key, tmp->key) == 0)
	{
			return (tmp->value);
	}
	tmp = tmp->next;
}
return (NULL);
}

#include "hash_tables.h"
/**
 * key_index - generates key
 * @key: key
 * @size: size
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int h;
h = hash_djb2(key);
return (h % size);
}

#include "hash_tables.h"

/**
 * key_index - key index to be stored in hash table.
 * @key: key to get index
 * @size: size of an array
 *
 * Return: index of the key
 * Description: djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

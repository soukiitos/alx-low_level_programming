#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: The size
 *
 * Return: 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *htable;

	if (size == 0)
	{
		return (NULL);
	}
	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
	{
		return (NULL);
	}
	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}

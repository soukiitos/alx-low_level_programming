#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: The hash table
 * @key: The key
 *
 * Return:0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *n;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	n = ht->array[i];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
		{
			return (n->value);
		}
		n = n->next;
	}
	return (NULL);
}

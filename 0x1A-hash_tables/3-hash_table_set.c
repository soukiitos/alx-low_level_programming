#include "hash_tables.h"
/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return:0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, j;
	hash_node_t *a;
	char *copy_v;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	copy_v = strdup(value);
	if (copy_v == NULL)
	{
		return (0);
	}
	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = copy_v;
			return (1);
		}
	}
	a = malloc(sizeof(hash_node_t));
	if (a == NULL)
	{
		free(copy_v);
		return (0);
	}
	a->key = strdup(key);
	if (a->key == NULL)
	{
		free(a);
		return (0);
	}
	a->value = copy_v;
	a->next = ht->array[i];
	ht->array[i] = a;
	return (1);
}

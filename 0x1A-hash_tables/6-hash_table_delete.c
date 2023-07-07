#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table
 *
 * Return:0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			n = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = n;
		}
	}
	free(ht->array);
	free(ht);
}

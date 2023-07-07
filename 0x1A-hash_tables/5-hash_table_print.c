#include "hash_tables.h"
/**
 * hash_table_print - Print a hash table
 * @ht: The hash table
 *
 * Return:0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char chr = 0;
	unsigned long int i = 0;
	hash_node_t *n;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (chr == 1)
			{
				printf(", ");
			}
			n = ht->array[i];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
				{
					printf(", ");
				}
				chr = 1;
			}
		}
	}
		printf("}\n");
}

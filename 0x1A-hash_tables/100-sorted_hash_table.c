#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
 * shash_table_create - Create a sorted hash table
 * @size: The size
 *
 * Return:0
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *htable;

	if (size == 0)
		return (NULL);
	htable = malloc(sizeof(shash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = malloc(sizeof(shash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);
	for (; i < size; i++)
		htable->array[i] = NULL;
	htable->shead = NULL;
	htable->stail = NULL;
	return (htable);
}

/**
 * shash_table_set - Add an element to the sorted hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *a, *b;
	char *copy_v;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy_v = strdup(value);
	if (copy_v == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	b = ht->shead;
	while (b)
	{
		if (strcmp(b->key, key) == 0)
		{
			free(b->value);
			b->value = copy_v;
			return (1);
		}
		b = b->snext;
	}
	a = malloc(sizeof(shash_node_t));
	if (a == NULL)
	{
		free(copy_v);
		return (0);
	}
	a->key = strdup(key);
	if (a->key == NULL)
	{
		free(copy_v);
		free(a);
		return (0);
	}
	a->value = copy_v;
	a->next = ht->array[i];
	ht->array[i] = a;
	if (strcmp(ht->shead->key, key) > 0)
	{
		a->sprev = NULL;
		a->snext = ht->shead;
		ht->shead->sprev = a;
		ht->shead = a;
	}
	else if (ht->shead == NULL)
	{
		a->sprev = NULL;
		a->snext = NULL;
		ht->shead = a;
		ht->stail = a;
	}
	else
	{
		b = ht->shead;
		while (b->snext != NULL && strcmp(b->snext->key, key) < 0)
			b = b->snext;
		a->sprev = b;
		a->snext = b->snext;
		if (b->snext == NULL)
			b->snext->sprev = a;
		else
			ht->stail = a;
		b->snext = a;
	}
	return (1);
}
/**
 * shash_table_get - retrieve a value associated with a key
 * @ht: The hash table
 * @key: The key
 *
 * Return:0
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	n = ht->array[i];
	if (i >= ht->size)
		return (NULL);
	n = ht->shead;
	while (n != NULL && strcmp(n->key, key) != 0)
		n = n->snext;
	return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - Print a sorted hash table
 * @ht: The hash table
 *
 * Return:0
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print a sorted hash table in reverse
 * @ht: The hash table
 *
 * Return:0
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;
	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Delete a sorted hash table
 * @ht: The hash table
 *
 * Return:0
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *n, *b;
	shash_table_t *h = ht;

	if (ht == NULL)
		return;
	n = ht->shead;
	while (n)
	{
		b = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = b;
	}
	free(h->array);
	free(h);
}

#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int a;

	tbl = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	tbl->size = size;
	tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (tbl->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		tbl->array[i] = NULL;

	return (tbl);
}

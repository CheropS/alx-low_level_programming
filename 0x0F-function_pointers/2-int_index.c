#include "function_pointers.h"

/**
 * int_index - function that searches for an interger
 * @size: number of elements in an array
 * @cmp: pointer to the function for comparing values
 * @array: array of integers
 * Return: if no results found return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int base;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (base = 0; base < size; base++)
	{
		if (cmp(array[base]) != 0)
			return (base);
	}

	return (-1);
}

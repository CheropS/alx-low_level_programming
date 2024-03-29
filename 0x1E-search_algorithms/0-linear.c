#include "search_algos.h"

/**
 * linear search- searches for a value in an array of integers.
 * @array: a pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for.
 * Description: prints a value every time it is compared in the array.
 * Return: if the value if not present or the array is NULL, -1.
 * 		otherwise, the first index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

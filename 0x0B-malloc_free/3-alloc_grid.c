#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **base;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	base = malloc(sizeof(int *) * height);

	if (base == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		base[hgt_index] = malloc(sizeof(int) * width);

		if (base[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(base[hgt_index]);

			free(base);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			base[hgt_index][wid_index] = 0;
	}

	return (base);
}

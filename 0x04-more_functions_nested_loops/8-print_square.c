#include "main.h"

/**
 * print_square - prints a square followed by a new line
 *@size: the size of a square
 * Return: always 0
 */

void print_square(int size)
{
	int sq1, sq2;

	if (size > 0)
	{
		for (sq1 = 0; sq1 < size; sq1++)
		{
			for (sq2 = 0; sq2 < size; sq2++)
				_putchar('#');
			if (sq1 == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}

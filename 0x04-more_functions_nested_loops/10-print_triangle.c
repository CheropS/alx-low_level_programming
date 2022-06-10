#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of a trangle
 */

void print_triangle(int size)
{
	int b, a;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for (a = size - b; a > 0; a--)
				_putchar(' ');

			for (a = 0; a < b; a++)
				_putchar('#');

			if (b == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

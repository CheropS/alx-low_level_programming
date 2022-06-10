#include "main.h"

/**
 * print_line - prints shortest distance between two points
 * @n: the number of _ characters to be printed
 * Return: always 0
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('n');
}

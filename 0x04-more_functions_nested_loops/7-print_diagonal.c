#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal using the \ char
 * @n: the number of \ characters to be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int len, wid;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (wid = 0; wid < len; wid++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}


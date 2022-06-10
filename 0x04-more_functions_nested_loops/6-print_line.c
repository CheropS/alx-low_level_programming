#include "main.h"

/**
 * print_line - prints shortest distance using the character _.
 * @n: the number of _ characters to be printed
 * Return: always 0
 */

void print_line(int n)
{
	int len;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len < n; len++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

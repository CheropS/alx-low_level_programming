#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 * Return: Always 0.
 */

void print_numbers(void)
{
	int w;

	for (w = 0; w <= 9; w++)
	{
		_putchar(w + '0');
	}

	_putchar('\n');
}

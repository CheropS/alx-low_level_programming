#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: always 0.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}


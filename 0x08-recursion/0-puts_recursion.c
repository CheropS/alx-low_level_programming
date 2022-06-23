#include <stdio.h>
#include "main.h"


/**
 * _puts_recursion - function that prints a string followed by new line
 * @s: character s
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * main - prints the last digit of a number
 *  @c: The number to be checked
 * Return: 0 if success
 */

int print_last_digit(int c)
{
	c %= 10;

	if (c < 0)
		c *= -1;

	_putchar(c + '0');
	return (c);
}

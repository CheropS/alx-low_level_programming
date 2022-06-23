#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: base value
 * @y: power value
 * Return: result of function.
 */

int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	answer *= _pow_recursion(x, y - 1);

	return (answer);
}

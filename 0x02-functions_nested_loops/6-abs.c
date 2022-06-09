#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @c: the integer to be evaluated
 * Return: 0 if successful
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		return (c);
	}
	else
	{
		return (c);
	}
}

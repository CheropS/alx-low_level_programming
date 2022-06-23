#include "main.h"

int find_sqrt(int a, int b);
int _sqrt_recursion(int n);

/**
 * find_sqrt - function to find square root of an inputted number
 * @a: number to determine the square root
 * @b: the root to be tested
 * Return: square root of natural number
 */

int find_sqrt(int a, int b)
{
	if ((b * b) == a)
		return (b);

	if (b == a / 2)
		return (-1);

	return (find_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - Returns natural square root
 * @n: the number to return the square root of
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int b = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, b));
}

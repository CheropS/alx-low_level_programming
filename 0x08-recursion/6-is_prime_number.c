#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if its a prime number
 * @n: interger to be checked
 * Return: 1 if successful, otherwise return 0.
 */

int is_prime_number(int n)
{
	int count = 0;

	if (n == 1)
	{
		count = 1;
	}

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			count = 1;
			break;
		}
	}
	return (count);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of parameters
 * @n: number of integer
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int base, sum = 0;

	va_start(nums, n);

	for (base = 0; base < n; base++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}


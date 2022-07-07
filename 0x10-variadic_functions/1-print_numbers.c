#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int base;

	va_start(nums, n);

	for (base = 0; base < n; base++)
	{
		printf("%d", va_arg(nums, int));

		if (base != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int base;

	va_start(strings, n);

	for (base = 0; base < n; base++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("null");
		else
			printf("%s", str);

		if (base != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

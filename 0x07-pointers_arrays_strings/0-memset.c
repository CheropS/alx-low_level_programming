#include <stdio.h>
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @n: integer
 * @s: pointed to
 * @b: constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int base;
	unsigned char *memory = s, value = b;

	for (base = 0; base < n; base++)
		memory[base] = value;

	return (memory);
}

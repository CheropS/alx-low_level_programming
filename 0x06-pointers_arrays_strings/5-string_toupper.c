#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase to uppercase
 * @s: string to be changed
 * Return: Always 0
 */

char *string_toupper(char *b)
{
    int base = 0;

	while (b[base])
	{
		if (b[base] >= 'a' && b[base] <= 'z')
			b[base] -= 32;

		base++;
	}

	return (b);
}

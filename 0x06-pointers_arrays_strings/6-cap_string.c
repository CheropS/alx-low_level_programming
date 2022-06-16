
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @b: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *b)
{
	int base = 0;

	while (b[base])
	{
		while (!(b[base] >= 'a' && b[base] <= 'z'))
			base++;

		if (b[base - 1] == ' ' ||
		    b[base - 1] == '\t' ||
		    b[base - 1] == '\n' ||
		    b[base - 1] == ',' ||
		    b[base - 1] == ';' ||
		    b[base - 1] == '.' ||
		    b[base - 1] == '!' ||
		    b[base - 1] == '?' ||
		    b[base - 1] == '"' ||
		    b[base - 1] == '(' ||
		    b[base - 1] == ')' ||
		    b[base - 1] == '{' ||
		    b[base - 1] == '}' ||
		    base == 0)
			b[base] -= 32;

		base++;
	}

	return (b);
}

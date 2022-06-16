#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words in a string
 * @s: string to be caitalized
 * Return: uppercase string.
 */

char *cap_string(char *b)
{
    int w, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (w = 0; b[w] != '\0'; w++)
	{
		if (b[w] >= 'a' && b[w] <= 'z')
		{
			b[w] = b[w] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (b[w] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}

}

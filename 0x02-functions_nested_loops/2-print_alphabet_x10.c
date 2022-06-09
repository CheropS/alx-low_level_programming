#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lower case ten times
 *
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}
}

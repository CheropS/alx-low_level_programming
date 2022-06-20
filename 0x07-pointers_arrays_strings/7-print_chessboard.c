#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: array row
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			if (b == 7)
			{
				_putchar(a[a][b]);
				_putchar('\n');
			}
			else
				_putchar(a[a][b]);
		}
	}
}

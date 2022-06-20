#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: array row
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int x,y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			if (y == 7)
			{
				_putchar(a[x][y]);
				_putchar('\n');
			}
			else
				_putchar(a[x][y]);
		}
	}
}

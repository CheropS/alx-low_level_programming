#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment for bytes
 * @accept: bytes in new segment
 * Return: number of bytes of s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	int z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}

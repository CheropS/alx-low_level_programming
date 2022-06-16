#include <main.h"

/**
 *strcat - to concatenate two strings
 *@src: the source
 *@dest: a pointer to a string to be concatenated
*Return: a pointer to the destination @dest.
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}


 

#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function that locates substring
 * @haystack: string
 * @needle: first occurence of the substring
 * Return: beginning of the located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	int b = 0;

	while (needle[b] != '\0')
		b++;
	
	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (j != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

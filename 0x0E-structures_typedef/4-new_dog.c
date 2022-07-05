#incude "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _copy - keeps a copy of passed argument
 * @src: source data
 * Return: pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int a, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
	{
		continue;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0, src[a] != '\0'; a++)
	{
		ptr[a] = src[a];
	}

	ptr[a] = '\0';
	return (ptr);
}

/**
 * *new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the owner
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bosco;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	bosco = malloc(sizeof(dog_t));
	if (bosco == NULL)
		return (NULL);
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(bosco);
		return (NULL);
	}
	(*bosco).name = new_name;

	(*bosco).age = age;

	new_owner = copy(owner);
	if (new_owner == NULL)
	{
		free((*bosco).name);
		free(bosco);
		return (NULL);
	}

	(*bosco).owner = new_owner;

	return (bosco);
}

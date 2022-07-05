#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct data type for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_g;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_g *new_dog(char *name, float age, char *owner);
void free_dog(dog_g *d);

#endif

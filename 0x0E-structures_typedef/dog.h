#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - new struct type
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
	char	*name;
	float	age;
	char	*owner;
} dog;


void	init_dog(struct dog *d, char *name, float age, char *owner);
#endif

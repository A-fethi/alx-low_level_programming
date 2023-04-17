#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
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

typedef struct dog dog_t;

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);

#endif

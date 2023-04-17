#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: variable
 */

void	free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

#include "dog.h"

/**
 * _strdup - copies the str given as parameter to dest
 * @str: the string
 * Return: NULL if str is NULL, else pointer to the new string
 */

char	*_strdup(char *str)
{
	int	i;
	char	*dest;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable
 * * @name: name
 * @age: age
 * @owner: owner
 */

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
}

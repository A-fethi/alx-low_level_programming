#include "dog.h"

/**
 * _strlen - return the lenght of a string
 * @s: char to check
 * Return: len of the string
 */

int	_strlen(char *s)
{
	char	*str;

	str = s;
	while (*str)
	{
		str++;
	}
	return (str - s);
}

/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: pointer to dest
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL if fails, else pointer to the new dog
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*dog;
	int	len1;
	int	len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

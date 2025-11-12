#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Compute length of a string
 * @s: string to measure
 *
 * Return: length of @s (0 if s is NULL)
 */
static int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - Copy a string including the null byte
 * @dest: destination buffer
 * @src:  source string
 *
 * Return: pointer to @dest
 */
static char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog and store copies of strings
 * @name: dog's name (to be duplicated)
 * @age:  dog's age
 * @owner: owner's name (to be duplicated)
 *
 * Return: pointer to new dog_t on success, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name;
	int len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	d->age = age;

	return (d);
}

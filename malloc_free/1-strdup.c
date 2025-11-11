#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the given string.
 * @str: String to duplicate.
 *
 * Return: Pointer to the duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i = 0;
	unsigned int len = 0;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	array = malloc((len + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';

	return (array);
}

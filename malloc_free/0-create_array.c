#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array
 * @size: Size of the array
 * @c: Char in the array
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

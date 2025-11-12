#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new concatenated string,
 *         or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
char *array;
	unsigned int i = 0, j = 0;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	array = malloc((len1 + len2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		array[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		array[len1 + j] = s2[j];

	array[len1 + len2] = '\0';

	return (array);
}

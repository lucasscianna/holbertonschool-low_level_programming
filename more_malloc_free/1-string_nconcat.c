#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates s1 and the first n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to copy from s2.
 *
 * Return: Pointer to the allocated s1 + n first bytes s2 string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *nstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	nstr = malloc(len1 + n + 1);

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		nstr[i] = s1[i];

	for (i = 0; i < n; i++)
		nstr[len1 + i] = s2[i];

	nstr[len1 + i] = '\0';

	return (nstr);
}

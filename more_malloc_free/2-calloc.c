#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates and init at 0 memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each elements.
 *
 * Return: Pointer to the allocated memory, NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
		if (ptr == 0)
			return (NULL);

	total = nmemb * size;

	for (i = 0; i < total; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Allocates and init at 0 memory for an array.
 * @min: Number of elements.
 * @max: Size of each elements.
 *
 * Return: Pointer to the allocated memory, NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc((max - min + 1) * (sizeof(int)));
		if (arr == NULL)
			return (NULL);

	for (i = 0; i < size - 1; i++)
		arr[i] = min + i;

	return (arr);
}

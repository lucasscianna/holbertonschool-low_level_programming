#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid -- Allocate a 2 dimensional array of integers
*
*@width: numbers of column
*@height: numbers of rows
*
*Return: Pointer to the newly allocated 2D array,
*or NULL on failure or if width/height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
int **matrice, i = 0, j = 0;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	matrice = malloc(height * sizeof(int *));
		if (matrice == NULL)
			return (NULL);

	for (i = 0; i < height; i++)
	{
		matrice[i] = malloc(width * sizeof(int));
		if (matrice[i] == NULL)
		{
			for (j = 0; j <  i; j++)
				free(matrice[j]);
			free(matrice);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrice[i][j] = 0;
	}

	return (matrice);
}

#include "function_pointers.h"
#include <stdio.h>

/**
*int_index: function that searches for an integer
*@array: pointer to a array
*@size: numbers of elements
*@cmp: pointer to a comparison function
*
*Return: index of first match, or -1 if none
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{

int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}

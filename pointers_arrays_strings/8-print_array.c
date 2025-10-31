#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_array - Prints the content of an array
* @a: Array to print
* @n: Number of char to print
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

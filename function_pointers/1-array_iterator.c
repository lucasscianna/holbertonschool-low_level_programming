#include "function_pointers.h"
#include <stdio.h>

/**
*array_iterator:function given as a parameter on each element of an array
*@array: is the pointer to the array
*@size: is the size of the array
*@action: is the pointer to a function
*
*/



void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
	action(array[i]);

}

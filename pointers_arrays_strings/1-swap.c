#include "main.h"

/**
 *swap_int - switch the value of 2 int
 *
 *@a: is a int
 *
 *@b:is a int
 *
 */

void swap_int(int *a, int *b)
{

int tmp = *a;

*a = *b;
*b = tmp;

}

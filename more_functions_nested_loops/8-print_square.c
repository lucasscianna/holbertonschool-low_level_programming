#include "main.h"
/**
* print_square - prints #
* @size: size oof square
*/
void print_square(int size)
{
int haut, large;

if (size > 0)
{
for (haut = 0; haut < size; haut++)
{
for (large = 0; large < size; large++)
_putchar('#');

if (haut == size - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}

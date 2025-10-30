#include "main.h"
/**
* print_triangle - prints a triangle made of ' ' and #
* @size: size of triangle
*/
void print_triangle(int size)
{
int lign, column;

if (size <= 0)
{
_putchar('\n');
return;
}

for (lign = 1; lign <= size; lign++)
{
for (column = 1; column <= size - lign; column++)
_putchar(' ');

for (column = 1; column <= lign; column++)
_putchar('#');

_putchar('\n');
}
}

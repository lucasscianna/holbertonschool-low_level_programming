#include "main.h"
/**
* print_line - prints _
* @n: numbers of _
*
*/
void print_line(int n)
{
int longueur;

if (n > 0)
{
for (longueur = 0; longueur < n; longueur++)
_putchar('_');
}
_putchar('\n');
}

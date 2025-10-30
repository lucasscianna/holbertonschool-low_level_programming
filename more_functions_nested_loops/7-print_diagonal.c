#include "main.h"
/**
* print_diagonal - prints backslash
* @n: numbers of backslash
*
*/
void print_diagonal(int n)
{
int backslash, space;

if (n <= 0)
{
_putchar('\n');
return;
}

for (backslash = 0; backslash < n; backslash++)
{
for (space = 0; space < backslash; space++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
}
}
